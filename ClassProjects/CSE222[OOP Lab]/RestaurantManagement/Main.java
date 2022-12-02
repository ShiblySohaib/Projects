import java.util.ArrayList;
import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        int select1, select2, select3, login = 1;
        Scanner input = new Scanner(System.in);
        Admin adminobj = new Admin();
        ManageFood managefoodobj = new ManageFood();

        /////////////////       dummy data      ///////////////
        AddFoodForMenu f1=new AddFoodForMenu();
        f1.CreateMenu(1,"Chicken",150);
        managefoodobj.foodlist.add(f1);
        AddFoodForMenu f2=new AddFoodForMenu();
        f2.CreateMenu(2,"Beef",200);
        managefoodobj.foodlist.add(f2);
        AddFoodForMenu f3=new AddFoodForMenu();
        f3.CreateMenu(3,"Burger",150);
        managefoodobj.foodlist.add(f3);
        AddFoodForMenu f4=new AddFoodForMenu();
        f4.CreateMenu(4,"Coffee",200);
        managefoodobj.foodlist.add(f4);
        AddFoodForMenu f5=new AddFoodForMenu();
        f5.CreateMenu(5,"Munch",150);
        managefoodobj.foodlist.add(f5);
        AddFoodForMenu f6=new AddFoodForMenu();
        f6.CreateMenu(6,"Pizza",200);
        managefoodobj.foodlist.add(f6);
        AddFoodForMenu f7=new AddFoodForMenu();
        f7.CreateMenu(7,"Pasta",150);
        managefoodobj.foodlist.add(f7);
        AddFoodForMenu f8=new AddFoodForMenu();
        f8.CreateMenu(8,"Sushi",200);
        managefoodobj.foodlist.add(f8);

        ///////////////////////////////////////////////////////
        for (; ; ) {
            if(login==1) {
                login=0;
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
                                    managefoodobj.PrintOrder();
                                    break;
                                case 3:
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
                        login=1;
                        break;
                    case 4:
                        return;

                    default:
                        break;
                }
                if(login==1)break;
            } while (select1 != 0);
        }
    }
}