import java.util.Scanner;

/**
 * bookShopjava
 */
public class biditJava {

    public static void main(String[] args) {

        char n;
        int costM = 0;
        mainMenu objMain = new mainMenu();
        Scanner sc = new Scanner(System.in);
        System.out.println("//**************||BookShop||***************//");
        System.out.println("");
        System.out.println("a) Main Course Book");
        System.out.println("b) Literature Book");
        System.out.println("c) Story Book");
        while (true) {
            System.out.println("");
            System.out.print("        Type a b or c to enter into the desired menu: ");

            n = sc.next().charAt(0);
            // sc.nextLine();
            System.out.println("");

            switch (n) {
                case 'a':
                    System.out.println("a) Main Course Book_____");
                    System.out.println("total cost" + objMain.mainCB());
                    // costM=objMain.mainCB();
                    break;

                case 'b':
                    System.out.println("b) Literature Book______");
                    // costM=objMain.litBook();
                    System.out.println("total cost" + objMain.litBook());
                    break;

                case 'c':
                    System.out.println("c) Story book");
                    // costM=objMain.storyBook();
                    System.out.println("total cost" + objMain.storyBook());
                    break;
            }
            System.out.println("");
            System.out.println("do You want to purchase more Type 1");
            int exitLoop = sc.nextInt();
            if (exitLoop == 1) {
                continue;
            } else {
                System.out.println("total amount after 10% discount: Rs " + (objMain.cost - (objMain.cost * 0.1)));
                System.out.println("exiting the program");
                break;
            }
        }

    }
}

class mainMenu {
    String name;
    public int cost;

    mainMenu() {
        this.cost = 0;
    }

    public int costOfBook(int classItr, String languageMainCB) {

        Scanner scCost = new Scanner(System.in);
        int arr[] = new int[6];
        for (int itr = 0; itr < 6; itr++) {
            int itrCost = itr + (classItr * 40 + itr * itr);
            arr[itr] = itrCost;
            System.out.println("sno" + (itr + 1) + "      class: " + classItr + "         " + languageMainCB + " part "
                    + itr + "      "
                    + "Rs: " + itrCost);
        }
        System.out.println("");
        System.out.print("Enter the sno of book to purchase: ");
        while (true) {

            int n = scCost.nextInt();
            switch (n) {
                case 1:
                    cost += arr[0];
                    break;

                case 2:
                    cost += arr[1];
                    break;

                case 3:
                    cost += arr[2];
                    break;

                case 4:
                    cost += arr[3];
                    break;

                case 5:
                    cost += arr[4];
                    break;

                case 6:
                    cost += arr[5];

            }

            System.out.println("");
            System.out.print("to purchase more book from this menu press 1 or press 0: ");
            int toggle = scCost.nextInt();
            if (toggle == 1) {
                continue;
            } else {
                System.out.println("going to previous menu.");
                break;
            }

        }

        System.out.println("book purchased discount applied! ");
        cost = (cost + cost * (10 / 100));
        return cost;
    }

    public int mainCB() {

        Scanner scMainCB = new Scanner(System.in);
        System.out.println("Class and language");
        System.out.print("Class:");
        int classItr = scMainCB.nextInt();
        System.out.println("");
        System.out.print("Language:");
        String languageMainCB = scMainCB.next();
        System.out.println("");
        System.out.println("**********name of the book and language**********");

        costOfBook(classItr, languageMainCB);
        return cost;
    }

    public int litBook() {
        Scanner scMainCB = new Scanner(System.in);
        System.out.println("Class and Author");
        System.out.print("Class:");
        int classItr = scMainCB.nextInt();
        System.out.println("");
        System.out.print("author:");
        String languageMainCB = scMainCB.next();
        System.out.println("");
        System.out.println("**********name of the book and author**********");

        costOfBook(classItr, languageMainCB);
        return cost;
    }

    public int storyBook() {
        Scanner scMainCB = new Scanner(System.in);
        System.out.println("Class and story");
        System.out.print("Class:");
        int classItr = scMainCB.nextInt();
        System.out.println("");
        System.out.print("story:");
        String languageMainCB = scMainCB.next();
        System.out.println("");
        System.out.println("**********name of the book and story**********");

        costOfBook(classItr, languageMainCB);
        return cost;
    }
}

/*
 * Develop a Java program as project work to manage and maintain the billing
 * system of "book shop " . The specifications are given below.
 * 1. The main menu contain the following items
 * a) Main Course Book
 * b) Literature book
 * c) Story book
 * 2. On selecting "Main Course Book " the system further asks
 * "Class and language"
 * 3. On selecting "Literature Book" the system further
 * asks"Class and auther name"
 * 4. On selecting "story book" the system further asks the quantity (number of
 * books ) required
 * 5. As you select any specific book it further asks the quantity (no.of books)
 * 6. Enter the quantity
 * 7. It further displays do you want to purchase more(yes/no) * .On entering
 * "yes " control moves to step 1 to accept the next or otherwise it displays to
 * step 8
 * 8. It displays a bill as per amount of books you have ordered after giving
 * discount of10%
 * 9.the same process issued for other selected items of main menu
 * Module to be used
 * a) decision construct
 * b) iterations
 * c) methods
 * d) constructer
 * e) switch case
 */