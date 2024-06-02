#include "manual_router.h"
#include "router.h"

void ManualRouter::addRoutingEntry(const Address &destination, Link *nextLink){
    RoutingEntry* rEntry;

    rEntry->destination = destination;
    rEntry->nextLink = nextLink;
    routingTable_.push_back(*rEntry);
}