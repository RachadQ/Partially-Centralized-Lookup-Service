#pragma once
#ifndef PEER_H
#define PEER_H

#include <string>
#include <vector>

class Peer
{
public:
	Peer(const std::string& id, const std::string& address, const std::string& color);

	std::string getId() const;
	std::string getAddress() const;
	std::string getColor() const;


private:
	std::string id;
	std::string address;
	std::string color;



};

#endif // PEER_H

