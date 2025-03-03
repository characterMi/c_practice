typedef char name[25];

typedef struct
{
    char name[25];
    char password[100];
    int id;
} User;

int main()
{
    name user_name = "Abolfazl";
    User user = {"Ali", "123456", 1};

    return 0;
}