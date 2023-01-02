import java.util.Scanner;

public class Admin extends Password {
    int i;

    public void Login() {
        String pass;
        Scanner input = new Scanner(System.in);

        for (i = 0; i < 30; i++) {
            System.out.print("*");
        }

        System.out.print(" PASSWORD PROTECTED ");

        for (i = 0; i < 30; i++) {
            System.out.print("*");
        }

        System.out.print("\n\n\t\t\t\t\t\t\t   Enter Password: ");

        pass = input.nextLine();

        if (pass.equals(getPassword())) {
            System.out.println("\t\t\t\t\t\t\t\tLogin successful");
        } else {
            System.out.println("\t\t\t\tWarning!! Incorrect Password. Enter Correct Password.\n\n");
            Login();
        }
    }

    public void Mainmenu() {

        System.out.println();
        for (i = 0; i < 21; i++) {
            System.out.print("=");
        }

        System.out.print(" WELCOME TO RESTAURANT SERVICE SYSTEM ");

        for (i = 0; i < 21; i++) {
            System.out.print("=");
        }

        System.out.println();
        System.out.println("1. Food Management");
        System.out.println("2. Order Management");
        System.out.println("3. Change Password");
        System.out.println("4. Exit");
    }

    public void ManageFoodMenu() {
        System.out.println();
        for (i = 0; i < 31; i++) {
            System.out.print("=");
        }

        System.out.print(" MANAGE FOOD MENU ");

        for (i = 0; i < 31; i++) {
            System.out.print("=");
        }

        System.out.println();
        System.out.println("1. Menu List");
        System.out.println("2. Add Food");
        System.out.println("3. Edit Food");
        System.out.println("4. Delete Food");

        System.out.println("0. Return Main Menu");
    }

    public void MenuOrder() {
        System.out.println();
        for (i = 0; i < 30; i++) {
            System.out.print("=");
        }

        System.out.print(" MANAGE ORDER MENU ");

        for (i = 0; i < 30; i++) {
            System.out.print("=");
        }
        System.out.println();
        System.out.println("1. Add order");
        System.out.println("2. Payment Information");
        System.out.println("0. Return Main Menu");

    }

    public void AllSeats() {
        int i;
        System.out.println();
        for (i = 0; i < 81; i++) {
            System.out.print("-");
        }
        System.out.println();
        System.out.println("\t\t\t\t\t\t\t\t\t Tables ");

        System.out.println("\t\t\t\t\t   Table-01\t\tTable-02\t\tTable-03");
        System.out.println("\t\t\t\t\t   Table-04\t\tTable-05\t\tTable-06");
        System.out.println("\t\t\t\t\t   Table-07\t\tTable-08\t\tTable-09");
        System.out.println("\t\t\t\t\t##### Each Table Contain Four Members #####");
        for (i = 0; i < 81; i++) {
            System.out.print("-");
        }
    }

    public void ChangePass(){
        System.out.println();
        System.out.println("=============================== Change Password ===============================\n");
        System.out.println("Enter new password: ");
        String pass1 = input.next();
        setPassword(pass1);
        System.out.println("Password changed successfully...");
    }
}