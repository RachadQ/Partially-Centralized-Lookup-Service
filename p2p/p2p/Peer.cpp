#include "Peer.h"

Peer::Peer(const std::string& id, const std::string& address, const std::string& color)
{
	this->id = id;
	this->address = address;
	this->color = color;
}


std::string Peer::getId() const {
	return id;
}

std::string Peer::getAddress() const {
	return address;
}

std::string Peer::getColor() const {
	return color;
}