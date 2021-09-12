
{
    return top == NULL;
}
int peek()
{
    if (!isEmpty())
        return top->data;
    