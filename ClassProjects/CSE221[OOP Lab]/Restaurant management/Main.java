import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int select1, select2, select3, login = 1;
        Scanner input = new Scanner(System.in);
        Admin adminobj = new Admin();
        ManageFood managefoodobj = new ManageFood();
        AddFoodForMenu food = new AddFoodForMenu();

        /////////////////       dummy data      ///////////////

        food.CreateMenu("Chicken", 150);
        managefoodobj.foodlist.add(food);
        food = new AddFoodForMenu();
        food.CreateMenu("Pizza", 200);
        managefoodobj.foodlist.add(food);
        food = new AddFoodForMenu();
        food.CreateMenu("Pasta", 150);
        managefoodobj.foodlist.add(food);
        food = new AddFoodForMenu();
        food.CreateMenu("Sushi", 300);
        managefoodobj.foodlist.add(food);
        food = new AddFoodForMenu();
        food.CreateMenu("Munch", 100);
        managefoodobj.foodlist.add(food);


        ///////////////////////////////////////////////////////
        for (; ; ) {
            if (login == 1) {
                login = 0;
                adminobj.Login();
            }
            do {
                adminobj.Mainmenu();
                System.out.print("Please Enter Your Choice: ");
                select1 = input.nextInt();

                switch (select1) {
                    case 1:
                        do {
                            adminobj.ManageFoodMenu();
                            System.out.print("Please Enter Your Choice: ");
                            select2 = input.nextInt();
                            switch (select2) {
                                case 1:
                                    managefoodobj.Print();
                                    break;
                                case 2:
                                    managefoodobj.addFood();
                                    break;
                                case 3:
                                    managefoodobj.Print();
                                    managefoodobj.EditFood();
                                    break;
                                case 4:
                                    managefoodobj.Print();
                                    managefoodobj.DeleteFood();
                                    break;
                                case 0:
                                    System.out.println("Back to the Menu");
                                    break;
                                default:
                                    break;
                            }
                        } while (select2 != 0);
                        break;
                    case 2:

                        do {
                            adminobj.MenuOrder();
                            System.out.print("Please Enter Your Choice: ");
                            select3 = input.nextInt();
                            switch (select3) {
                                case 1:
                                    adminobj.AllSeats();
                                    managefoodobj.TakeOrder();
                                    break;
                                case 2:
                                    managefoodobj.Search();
                                    break;
                                case 0:
                                    System.out.println("Back to the Menu");
                                    break;
                                default:
                                    break;
                            }
                        } while (select3 != 0);
                        break;
                    case 3:
                        System.out.println("Enter new password: ");
                        String pass1 = input.next();
                        adminobj.setPassword(pass1);
                        System.out.println("Password changed successfully");
                        login = 1;
                        break;
                    case 4:
                        return;

                    default:
                        break;
                }
                if (login == 1) break;
            } while (select1 != 0);
        }
    }
}