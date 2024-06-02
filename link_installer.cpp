#include "link_installer.h"

Link *LinkInstaller::install(Node *a, Node *b)
{
    Link *newLink = new Link(a, b);
    a->links_.push_back(newLink);
    b->links_.push_back(newLink);
    return newLink;
}