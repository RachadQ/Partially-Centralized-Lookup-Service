#include "LookupService.h"
#include <iostream>


void LookupService::start() {
    // In a real application, you would set up a server to listen for peer connections
    std::cout << "Lookup Service started. Listening for peers..." << std::endl;
}

void LookupService::addPeer(const Peer& peer) {
    peers.push_back(peer);
    std::cout << "Added peer: " << peer.getId() << std::endl;
}

void LookupService::removePeer(const std::string& peerId) {
    // Simple removal logic (could be improved)
    peers.erase(std::remove_if(peers.begin(), peers.end(),
        [&peerId](const Peer& peer) { return peer.getId() == peerId; }),
        peers.end());
    std::cout << "Removed peer: " << peerId << std::endl;
}

std::vector<Peer> LookupService::getPeers() const {
    return peers;
}