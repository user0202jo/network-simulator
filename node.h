#ifndef NODE_H
#define NODE_H

#include "link.h"
#include "packet.h"
#include <vector>

class Node {
  friend class LinkInstaller;

private:
  int id_;
  static int nextId_;

public:
  Packet *packets;
  Node() : id_(nextId_++) {}
  int id() const { return id_; }
  std::vector<Link *> links_;
  bool operator==(Node *a);
  void pushPacket(Packet *p);
  void receive();
  Packet *getPacket() {return packets;}
};

bool Node::operator==(Node *a)
{
    if (a->id_ == id_)
        return true;
    return false;
}

void Node::pushPacket(Packet* p)
{
    packets = p;
}

#endif