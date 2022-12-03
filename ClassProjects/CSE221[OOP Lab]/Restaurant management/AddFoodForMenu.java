import java.util.Scanner;

public class AddFoodForMenu {
    private String name;
    private float price;
    Scanner input =new Scanner(System.in);

    public void CreateMenu() {
        System.out.println();
        System.out.print("Enter Food Name: ");
        name=input.nextLine();
        System.out.print("Enter Food Price: ");
        price=input.nextFloat();
    }
    public void CreateMenu(String name, float price) {
        this.name=name;
        this.price=price;
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

