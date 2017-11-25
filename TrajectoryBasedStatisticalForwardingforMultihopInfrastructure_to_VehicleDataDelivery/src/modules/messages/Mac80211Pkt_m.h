//
// Generated file, do not edit! Created by nedtool 4.6 from src/modules/messages/Mac80211Pkt.msg.
//

#ifndef _MAC80211PKT_M_H_
#define _MAC80211PKT_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "MacPkt_m.h"
#include "Coord.h"
// }}

/**
 * Class generated from <tt>src/modules/messages/Mac80211Pkt.msg:26</tt> by nedtool.
 * <pre>
 * //
 * // Defines all fields of an 802.11 MAC frame
 * //
 * packet Mac80211Pkt extends MacPkt
 * {
 *     int sendeMac;
 *     int receiverMac;
 *     int sequenceNumber;
 *     int sendingTime;
 * 
 *     int sequenceControl;
 *     bool retry;
 *     simtime_t duration; 	//the expected remaining duration the current transaction
 * }
 * </pre>
 */
class Mac80211Pkt : public ::MacPkt
{
  protected:
    int sendeMac_var;
    int receiverMac_var;
    int sequenceNumber_var;
    int sendingTime_var;
    int sequenceControl_var;
    bool retry_var;
    simtime_t duration_var;

  private:
    void copy(const Mac80211Pkt& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Mac80211Pkt&);

  public:
    Mac80211Pkt(const char *name=NULL, int kind=0);
    Mac80211Pkt(const Mac80211Pkt& other);
    virtual ~Mac80211Pkt();
    Mac80211Pkt& operator=(const Mac80211Pkt& other);
    virtual Mac80211Pkt *dup() const {return new Mac80211Pkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSendeMac() const;
    virtual void setSendeMac(int sendeMac);
    virtual int getReceiverMac() const;
    virtual void setReceiverMac(int receiverMac);
    virtual int getSequenceNumber() const;
    virtual void setSequenceNumber(int sequenceNumber);
    virtual int getSendingTime() const;
    virtual void setSendingTime(int sendingTime);
    virtual int getSequenceControl() const;
    virtual void setSequenceControl(int sequenceControl);
    virtual bool getRetry() const;
    virtual void setRetry(bool retry);
    virtual simtime_t getDuration() const;
    virtual void setDuration(simtime_t duration);
};

inline void doPacking(cCommBuffer *b, Mac80211Pkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Mac80211Pkt& obj) {obj.parsimUnpack(b);}


#endif // ifndef _MAC80211PKT_M_H_

