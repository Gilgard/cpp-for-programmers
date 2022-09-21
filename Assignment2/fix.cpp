int main()
{
    /*
        int a = 5;
        int &b; // b is not initilized
        int *c;
        c = &b;
        *a = *b + *c; // no pointers to a and b are made
        &b = 2; // an address cannot be set to an int
    */

    int a = 5;
    int &b = a;
    int *c;
    c = &b;
    a = b + *c;
    b = 2;
}
