void main()
{
    int ch;
    printf("Press 1: For Addition: \n");
    printf("Press 2: For Subtraction: \n");
    printf("Press 3: For Multiplication: \n");
    printf("Press 4: For Division: \n");
    printf("Press 5: For Exit:");
while(1)
{
    printf("\n\nEnter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        {
            int a,b,c;
            printf("\nEnter 2 numbers for addition: ");
            scanf("%d%d", &a, &b);
            c=a+b;
            printf("Addition is: %d", c);
            break;
        }

    case 2:
        {
            int a,b,c;
            printf("\nEnter 2 numbers for subtraction: ");
            scanf("%d%d", &a, &b);
            c=a-b;
            printf("Subtraction is: %d", c);
            break;
        }
    case 3:
        {
            int a,b,c;
            printf("\nEnter 2 numbers for multiplication: ");
            scanf("%d%d", &a, &b);
            c=a*b;
            printf("Multiplication is: %d", c);
            break;
        }
    case 4:
        {
            int a,b,c;
            printf("\nEnter 2 numbers for division: ");
            scanf("%d%d", &a, &b);
            c=a/b;
            printf("Division is: %d", c);
            break;
        }
    case 5:
        {
            exit(0);
        }
    default:
        {
            printf("Wrong Input!!!");
        }
    }
}
    getch();
}
