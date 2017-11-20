//
// This file is part of an OMNeT++/OMNEST simulation example.
//
// Copyright (C) 2003-2008 Andras Varga
//
// This file is distributed WITHOUT ANY WARRANTY. See the file
// `license' for details on this and other legal matters.
//

// txc4.cc
#include <stdio.h>
#include <string.h>
#include <omnetpp.h>
/**
 * In this step you'll learn how to add input parameters to the simulation:
 * we'll turn the "magic number" 10 into a parameter.
 */
class Txc4 : public cSimpleModule
{
  private:
    int counter;
    // 각 모듈에 private member변수로 counter를 지정함으로서,
    // 각 모듈이 개별적인 counter를 갖게된다.
  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
};
Define_Module(Txc4);
void Txc4::initialize()
{
    // Initialize the counter with the "limit" module parameter, declared
    // in the NED file (tictoc4.ned).
    counter = par("limit");
    // we no longer depend on the name of the module to decide
    // whether to send an initial message
    if (par("sendMsgOnInit").boolValue() == true)
    {
        EV << "Sending initial message\n";
        cMessage *msg = new cMessage("tictocMsg");
        send(msg, "out");
    }
}
void Txc4::handleMessage(cMessage *msg)
{
    counter--;
    if (counter==0)
    {
        EV << getName() << "'s counter reached zero, deleting message\n";
        delete msg;
    }
    else
    {
        EV << getName() << "'s counter is " << counter << ", sending back message\n";
        send(msg, "out");
    }
}

