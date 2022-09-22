void main()
{
    char a[20];
    printf("Enter a string: ");
    gets(a);
    printf("Entered string is: %s",a);

    int start=0, end = strlen(a)-1;
    char temp;
    while(start<end)
    {
        temp = a[start];
        a[start]= a[end];
        a[end]=temp;

        start ++;
        end --;
    }
    printf("\nReversed string is: %s", a);


    getch();
}
