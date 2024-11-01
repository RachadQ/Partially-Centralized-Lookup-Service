#pragma once
#ifndef LOOKUPSERVICE_H
#define LOOKUPSERVICE_H

#include <vector>
#include "Peer.h"

class LookupService
{
public:
    void start();
    void addPeer(const Peer& peer);
    void removePeer(const std::string& peerId);
    std::vector<Peer> getPeers() const;

private:
    std::vector<Peer> peers; // List of active peers
};

#endif // LOOKUPSERVICE_H