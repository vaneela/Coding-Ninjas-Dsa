Node *reverseLinkedList(Node *head)
{
  // Write your code here
  Node *c = head;
  Node *ne;
  Node *prev = NULL;
  if (head != NULL)
    ne = c->next;

  while (c != NULL)
  {

    c->next = prev;
    prev = c;
    c = ne;
    if (ne != NULL)
      ne = ne->next;
  }
  return prev;
}