#include <stdio.h> //responsible for input and output functions
#include <stdlib.h> //responsible for memory allocation, process control, and other general utilities
#include <string.h> //responsible for string handling functions
#include <stdbool.h> //responsible for boolean data type and values
#include <time.h>

int main() {
   printf("Hello, World!\n"); //prints "Hello, World!" to the console
    
   int age = 25; //declares an integer variable named age and initializes it with the value 25
   int items = 5;
   float LegendarySword = 999.99; //declares a float variable named LegendarySword and initializes it with the value 99.99
   float HealthPotion = 9.99; //declares a float variable named HealthPotion and initializes it with the value 9.99
   float EpicArmor = 199.99; //declares a float variable named EpicArmor and initializes it with the value 199.99
   float CommonShield = 49.99; //declares a float variable named CommonShield and initializes it with the value 49.99
   float RareHelmet = 149.99; //declares a float variable named RareHelmet and initializes it with the value 149.99
   float RareBoots = 129.99; //declares a float variable named rareBoots and initializes it with the value 129.99
   float Chestplate = 179.99; //declares a float variable named Chestplate and initializes it with the value 179.99
   float Gloves = 89.99; //declares a float variable named Gloves and initializes it with the value 89.99
   float Ring = 59.99; //declares a float variable named Ring and initializes it with the value 59.99
   float Helmet = 149.99; //declares a float variable named Helmet and initializes it with the value 149.99
    
   srand((unsigned)time(NULL)); //seed random number generator (must be done before calling rand())
   
    char name[50] = "Alice"; //declares a character array named name (50 bytes to prevent overflow on long input)
    printf("My name is %s and I am %d years old.\n", name, age); //prints the value of name and age to the console using format specifiers
    printf("I have %d items in my backpack.\n", items); //prints the value of items to the console using a format specifier

    printf("type bag in the console to enter your backpack.\n"); //prints a message to the console
    scanf("%49s", name); //reads a string input from the user and stores it in the variable name (49 to leave room for null terminator)
    if (strcmp(name, "bag") == 0) { //compares the input string with "bag" and checks if they are equal
        printf("You have entered your backpack!\n"); //prints a message if the input is "bag"
        printf("You have %d items in your backpack.\n", items); //prints the number of items in the backpack
    } else {
        printf("You did not enter the correct command.\n"); //prints a message if the input is not "bag"
    }       

    int gold = 1000; //declares an integer variable named gold and initializes it with the value 1000
    char item[50]; //declares a character array named item with a size of 50
    printf("You have $%d in gold.\n", gold); //prints the value of gold to the console

    
    
    
    printf("type shop in the console to enter the shop.\n"); //prints a message to the console
    scanf("%49s", item); //reads a string input from the user and stores it in the variable item
    printf("You have entered the shop come check out what we have to offer!\n"); //prints a message to the console
    printf("We have the following items for sale:\n"); //prints a message to the console
    printf("1. Legendary Sword - $%.2f\n", LegendarySword); //prints the name and price of the Legendary Sword using a format specifier
    printf("2. Health Potion - $%.2f\n", HealthPotion); //prints the name and price of the Health Potion using a format specifier
    printf("3. Epic Armor - $%.2f\n", EpicArmor); //prints  the name and price of the Epic Armor using a format specifier
    printf("4. Common Shield - $%.2f\n", CommonShield); //prints the name and price of the Common Shield using a format specifier
    printf("5. Rare Helmet - $%.2f\n", RareHelmet); //prints the name and price of the Rare Helmet using a format specifier
    printf("6. Rare Boots - $%.2f\n", RareBoots); //prints the name and price of the Rare Boots using a format specifier
    printf("7. Chestplate - $%.2f\n", Chestplate); //prints the name and price of the Chestplate using a format specifier
    printf("8. Gloves - $%.2f\n", Gloves); //prints the name and price of the Gloves using a format specifier
    printf("9. Ring - $%.2f\n", Ring); //prints the name and price of the Ring using a format specifier
    printf("10. Helmet - $%.2f\n", Helmet); //prints the name and price of the Helmet using a format specifier      

   
   
   int userInput; //declares an integer variable named userInput
   bool hasLegendarySword = false; //declares a boolean variable named hasLegendarySword and initializes it with the value false

    printf("Shopkeeper: Welcome to my shop! What would you like to buy?\n"); //prints a message from the shopkeeper to the console
   scanf("%d", &userInput); //reads an integer input from the user and stores it in the variable userInput
 if (userInput == 1) { //checks if the user input is 1
     printf("You have purchased the Legendary Sword for $%.2f!\n", LegendarySword); //prints a message confirming the purchase of the Legendary Sword
     hasLegendarySword = true; //sets the hasLegendarySword variable to true to indicate that the user has purchased the Legendary Sword
     gold -= (int)LegendarySword; //subtracts the price of the Legendary Sword from the gold variable
     printf("You have $%d left in gold.\n", gold); //prints the remaining gold to the console   
    // Code block to execute if the condition is true
} else {
    // Code block to execute if the condition is false
}


    printf("Thank you for visiting the shop!\n"); //prints a message to the console thanking the user for visiting the shop
    printf("Legendary Sword status: %s\n", hasLegendarySword ? "Purchased" : "Not Purchased"); //prints the status of the Legendary Sword using a ternary operator to check if it has been purchased
    printf("Inspect your backpack to see your new item!\n"); //prints a message to the console prompting the user to check their backpack for the new item

    char grade[] = "S"; //declares a character array named grade and initializes it with the string "S"
    printf("Type 1 to inspect your backpack or 2 to exit the game.\n"); //prints a message to the console prompting the user to choose an option
    scanf("%d", &userInput); //reads an integer input from the user and stores it in the variable userInput
    if (userInput == 1 && hasLegendarySword) { //checks if the user input is 1 and if the user has purchased the Legendary Sword
        printf("You have the following items in your backpack:\n"); //prints a message to the console
        printf("- Legendary Sword\n"); //prints the name of the Legendary Sword to the console
        printf("- Health Potion\n"); //prints the name of the Health Potion to the console
        printf("Type equipment name in the console to reveal more information about the item.\n"); //prints a message to the console prompting the user to type the name of an item for more information
        scanf("%49s", item); //reads a string input from the user and stores it in the variable item
       
       if (strcmp(item, "LegendarySword") == 0) { //compares the input string with "Legendary Sword" and checks if they are equal
            printf("Item: Legendary Sword\n"); //prints the name of the item to the console
            printf("Grade: %s\n", grade); //prints the grade of the item to the console
            printf("Price: $%.2f\n", LegendarySword); //prints the price of the item to the console using a format specifier
        } else if (strcmp(item, "HealthPotion") == 0) { //compares the input string with "Health Potion" and checks if they are equal
            char grade[] = "A"; //declares a character array named grade and initializes it with the string "A"
            printf("Item: Health Potion\n"); //prints the name of the item to the console
            printf("Grade: %s\n", grade); //prints the grade of the item to the console
            printf("Price: $%.2f\n", HealthPotion); //prints the price of the item to the console using a format specifier
        } else {
            printf("You do not have that item in your backpack.\n"); //prints a message if the input does not match any items in the backpack
        }   

        printf("type Sword to equip the Legendary Sword or type Potion to use the Health Potion.\n"); //prints a message to the console prompting the user to choose an action
        scanf(" %49s", item); //reads a string input from the user and stores it in item
        if (strcmp(item, "Sword") == 0) { //compares the input string with "Sword" and checks if they are equal
            printf("You have equipped the Legendary Sword!\n"); //prints a message confirming that the user has equipped the Legendary Sword
        } else if (strcmp(item, "Potion") == 0) { //compares the input string with "Potion" and checks if they are equal
            printf("You have used the Health Potion and restored your health!\n"); //prints a message confirming that the user has used the Health Potion
        } else {
            printf("Invalid action. Please try again.\n"); //prints a message if the input does not match any valid actions
        }

    printf("You found a Chest that contains rare elixirs and combat boots! Do you want to open the chest? Type yes or no in the console.\n"); //prints a message to the console prompting the user to choose whether to open the chest
    scanf("%49s", item); //reads a string input from the user and stores it in the variable item
    if (strcmp(item, "yes") == 0) { //compares the input        
        printf("You have opened the chest and found the following items:\n"); //prints a message confirming that the user has opened the chest
        printf("- Rare Elixirs\n"); //prints the name of the Rare Elixirs to the console
        printf("- Combat Boots\n"); //prints the name of the Combat Boots to the console
    } else if (strcmp(item, "no") == 0) { //compares the input string with "no" and checks if they are equal
        printf("You have chosen not to open the chest.\n"); //prints a message confirming that the user has chosen not to open the chest
    } else {
        printf("Invalid input. Please try again.\n"); //prints a message if the input does not match "yes" or "no"
    }

    printf("you can sell your items in the shop to earn more gold! Type sell in the console to enter the selling menu.\n"); //prints a message to the console prompting the user to enter the selling menu
    scanf("%49s", item); //reads a string input from the user and stores it in the variable item
    if (strcmp(item, "sell") == 0) { //compares the input
        printf("Welcome to the selling menu! You can sell the following items:\n"); //prints a message confirming that the user has entered the selling menu
        printf("- Legendary Sword - $%.2f\n", LegendarySword); //prints the name and price of the Legendary Sword using a format specifier
        printf("- Health Potion - $%.2f\n", HealthPotion); //prints the name and price of the Health Potion using a format specifier
        printf("- Rare Elixir - $%.2f\n", 79.99); //prints the name and price of the Rare Elixirs using a format specifier
        printf("- Combat Boots - $%.2f\n", 89.99); //prints the name and price of the Combat Boots using a format specifier
        printf("Type the name of the item you want to sell in the console.\n"); //prints a message prompting the user to choose an item to sell
        scanf("%49s", item); //reads a string input from the user and stores it in the variable item
    }
    // Process item sale using lookup table (works whether user typed "sell" first or the item name directly)
    if (strcmp(item, "sell") == 0) {
        printf("Invalid input. Please try again.\n");
    } else {
        typedef struct { const char *aliases[4]; float price; const char *displayName; } SellableItem;
        SellableItem sellables[] = {
            {{"LegendarySword", NULL}, LegendarySword, "Legendary Sword"},
            {{"HealthPotion", NULL}, HealthPotion, "Health Potion"},
            {{"RareElixir", "Elixir", "Rare", NULL}, 79.99f, "Rare Elixir"},
            {{"CombatBoots", "Combat", NULL}, 89.99f, "Combat Boots"}
        };
        bool sold = false;
        for (int i = 0; i < (int)(sizeof(sellables) / sizeof(sellables[0])) && !sold; i++) {
            for (int j = 0; sellables[i].aliases[j] != NULL; j++) {
                if (strcmp(item, sellables[i].aliases[j]) == 0) {
                    printf("You have sold the %s for $%.2f!\n", sellables[i].displayName, sellables[i].price);
                    gold += (int)sellables[i].price;
                    printf("You now have $%d in gold.\n", gold);
                    sold = true;
                    break;
                }
            }
        }
        if (!sold) {
            printf("Invalid input. Please try again.\n");
        }
    }

    } else if (userInput == 2) { //checks if the user input is 2
        printf("You have exited the game. Goodbye!\n"); //prints a message confirming that the user has exited the game
        return 0; //exit the game
    } else {
        printf("Invalid input. Please try again.\n"); //prints a message if the input does not match any valid options
    }

    printf("Type 'shop' to enter the next shop: ");
    fflush(stdout); //ensure prompt displays before waiting for input
    scanf("%49s", item); //reads a string input from the user and stores it in the variable item
    if (strcmp(item, "Shop") == 0 || strcmp(item, "shop") == 0) { //accepts either case
        printf("Welcome to the next shop! We have new items for sale!\n"); //prints a message confirming that the user has entered the next shop
        printf("1. Mythical Bow - $299.99\n"); //prints the name and price of the Mythical Bow using a format specifier
        printf("2. Magic Staff - $249.99\n"); //prints the name and price of the Magic Staff using a format specifier
        printf("3. Enchanted Cloak - $199.99\n"); //prints the name and price of the Enchanted Cloak using a format specifier
        printf("4. Phoenix Feather - $149.99\n"); //prints the name and price of the Phoenix Feather using a format specifier
        printf("5. Dragon Scale - $99.99\n"); //prints the name and price of the Dragon Scale using a format specifier
        printf("6. Extraordinary Magical Sword - $499.99\n"); //prints the name and price of the Extraordinary Magical Sword using a format specifier
        printf("7. Glass from the fountain of youth - $399.99\n"); //prints the name and price of the Glass from the Fountain of Youth using a format specifier
    } else {
        printf("Invalid input. Please try again.\n"); //prints a message if the input does not match "Shop"
    }

    printf("Enter the number (1-7) of the item you want to buy: ");
    fflush(stdout);
    int shopChoice = 0;
    if (scanf("%d", &shopChoice) != 1) {
        while (getchar() != '\n'); //clear invalid input from buffer
        shopChoice = 0;
    }
    int purchaseAmount = 0; //tracks the price of the item attempted (for robbery reversal)
    switch (shopChoice) {
        case 1:
            printf("You have purchased the Mythical Bow for $299.99!\n");
            purchaseAmount = 299;
            break;
        case 2:
            printf("You have purchased the Magic Staff for $249.99!\n");
            purchaseAmount = 249;
            break;
        case 3:
            printf("You have purchased the Enchanted Cloak for $199.99!\n");
            purchaseAmount = 199;
            break;
        case 4:
            printf("You have purchased the Phoenix Feather for $149.99!\n");
            purchaseAmount = 149;
            break;
        case 5:
            printf("You have purchased the Dragon Scale for $99.99!\n");
            purchaseAmount = 99;
            break;
        case 6:
            printf("You have purchased the Extraordinary Magical Sword for $499.99!\n");
            purchaseAmount = 499;
            break;
        case 7:
            printf("You have purchased the Glass from the fountain of youth for $399.99!\n");
            purchaseAmount = 399;
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            purchaseAmount = 0;
            break;
    }
    if (purchaseAmount > 0) {
        gold -= purchaseAmount;
        printf("You have $%d left in gold.\n", gold);
    }
    if (gold < 0) { //checks if the gold variable is less than 0
        printf("You do not have enough gold to make that purchase.\n"); //prints a message if the user does not have enough gold
        printf("Would you like to try to obtain the item by force? Type yes or no in the console.\n"); //prints a message prompting the user to choose whether to try to obtain the item by force
        scanf("%49s", item); //reads a string input from the user and stores it
        if (strcmp(item, "yes") == 0) { //compares the input string with "yes" and checks if they are equal
            printf("You have pulled out your weapon from your backpack and aimed it at the shopkeeper!\n"); //prints a message confirming that the user has chosen to try to obtain the item by force
            if (rand() % 10 < 3) { //30% chance to succeed (0, 1, or 2 out of 10)
                printf("You have successfully obtained the item by force!\n"); //prints a message confirming that the user has successfully obtained the item by force
                gold += purchaseAmount; //reverses the purchase since they got the item without paying
                printf("You now have $%d in gold.\n", gold); //prints the updated gold amount to the console
            } else {
                printf("The shopkeeper has called the guards and you have been arrested for attempted robbery!\n"); //prints a message confirming that the user has been arrested for attempting to obtain the item by force
                printf("Game Over!\n"); //prints a game over message to the console
                return 0; //end the game
            }
        } else if (strcmp(item, "no") == 0) { //compares the input string with "no" and checks if they are equal
            printf("You have chosen not to try to obtain the item by force and walked home with nothing.\n"); //prints a message confirming that the user has chosen not to try to obtain the item by force
        } else {
            printf("Invalid input. Please try again.\n"); //prints a message if the input does not match "yes" or "no"
        }
    } else if (purchaseAmount > 0) {
        printf("You have enough gold to make that purchase.\n"); //prints a message confirming that the user has enough gold to make the purchase
    }

    printf("Next Quest coming soon!\n");
    return 0;
}
