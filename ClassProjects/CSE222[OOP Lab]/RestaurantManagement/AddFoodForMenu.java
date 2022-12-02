import java.util.Scanner;

public class AddFoodForMenu {
    private int serial;
    private String name;
    private float price;
    Scanner input =new Scanner(System.in);

    public void CreateMenu() {
        System.out.println();
        System.out.print("Enter Serial No: ");
        serial = input.nextInt();
        input.nextLine();
        System.out.print("Enter Food Name: ");
        name=input.nextLine();
        System.out.print("Enter Food Price: ");
        price=input.nextFloat();
    }
    public void CreateMenu(int serial, String name, float price) {
        this.serial=serial;
        this.name=name;
        this.price=price;
    }

    public int getSerial(){
        return serial;
    }
    public String getName(){
        return name;
    }
    public float getPrice(){
        return price;
    }

    public void setName() {
        System.out.print("Add New Food Name: ");
        this.name=input.nextLine();
    }
    public void setPrice() {
        System.out.print("Enter New Price: ");
        this.price= input.nextFloat();
    }

}

