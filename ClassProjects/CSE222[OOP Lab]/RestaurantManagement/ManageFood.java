import java.util.ArrayList;
import java.util.Scanner;

public class ManageFood{
	ArrayList<AddFoodForMenu> foodlist = new ArrayList<>();
	ArrayList<CustomerOrder> order = new ArrayList<>();
	int i;
	public int selectfood;


	Scanner input=new Scanner(System.in);
	
	public void addFood() {
		System.out.println();
		for ( i = 0; i < 35; i++)
		{
			System.out.print("=");
		}

		System.out.print(" ADD FOOD ");

		for ( i = 0; i < 35; i++)
		{
			System.out.print("=");
		}
		System.out.println("\n");
		System.out.print("Enter The Number of Food to Add in FoodMenu: ");
		int n = input.nextInt();

		for (int i = 0; i < n; i++) {
			AddFoodForMenu food = new AddFoodForMenu();
			food. CreateMenu();
			foodlist.add(food); 
		}
	}

	public void Print() {
		for ( i = 0; i < 81; i++)
		{
			System.out.print("-");
		}

		System.out.println();
		for ( i = 0; i < 35; i++)
		{
			System.out.print(" ");
		}
		System.out.print(" FOOD MENU");

		for ( i = 0; i < 35; i++)
		{
			System.out.print(" ");
		}
		System.out.println();

		System.out.print("\t\t\t\t\t\t\tSl");
		System.out.print("\t\t");
		System.out.print("Name");
		System.out.print("\t\t");
		System.out.print("Price");
		System.out.println();
		for (int i = 0; i < foodlist.size(); i++) {
			System.out.print("\t\t\t\t\t\t\t");
			System.out.print(foodlist.get(i).getSerial());
			System.out.print("\t\t");
			System.out.print(foodlist.get(i).getName());
			System.out.print("\t\t");
			System.out.print(foodlist.get(i).getPrice());
			System.out.println();
		}
		for ( i = 0; i < 81; i++)
		{
			System.out.print("-");
		}
		System.out.println();
	}


	public void EditFood() {
		for ( i = 0; i < 35; i++)
		{
			System.out.print("=");
		}

		System.out.print(" EDIT FOOD ");

		for ( i = 0; i < 35; i++)
		{
			System.out.print("=");
		}
		int foodsl;
		Scanner input=new Scanner(System.in);
		System.out.println();
		System.out.print("Enter serial no. to Edit: ");
		foodsl = input.nextInt();
		input.nextLine();
		if(foodsl<=foodlist.size()){
			foodlist.get(foodsl-1).setName();
			foodlist.get(foodsl-1).setPrice();
			System.out.println("Edited successfully");
		}
		else{
			System.out.println("Invalid Serial number. Try again.");
			EditFood();
		}
	}


	public void DeleteFood() {
		System.out.println();
		for ( i = 0; i < 34; i++)
		{
			System.out.print("=");
		}

		System.out.print(" DELETE FOOD ");

		for ( i = 0; i < 34; i++)
		{
			System.out.print("=");
		}
		int foodsl;
		System.out.println();
		System.out.print("Enter Name of FoodItem to Delete: ");
		foodsl = input.nextInt();
		if (foodsl<=foodlist.size()) {
				foodlist.remove(foodsl-1);
				System.out.println("Deleted successfully...");
		}
		else{
			System.out.println("Invalid Serial number. Try again.");
			DeleteFood();
		}
	}

	public void TakeOrder() {
		float foodprice=0;
		float Totalpayment=0;
		int n, quantity;

		CustomerOrder customer = new CustomerOrder();

		customer.input();
		order.add(customer);
		for (;;) {
			int option;
			Print();
		System.out.print("Enter Food Serial no. to Order: ");
		selectfood = input.nextInt();
		System.out.print("Enter The Quantity: ");
		quantity=input.nextInt();
		AddFoodForMenu food = new AddFoodForMenu();
		food = foodlist.get(selectfood-1);
		foodprice = food.getPrice() * quantity;

		Totalpayment =Totalpayment + foodprice;
		customer.setTotalpayment(Totalpayment);
		System.out.println();
		System.out.println("Order anything else?");
		System.out.println("1. Yes");
		System.out.println("2. No");
		option=input.nextInt();
		if(option==1){
			System.out.println();
			continue;
		}
		System.out.println("Order complete...");
		System.out.println("Total Payment is: "+ Totalpayment);
		break;
		}
	}


	public void PrintOrder() {
		System.out.println();
		for ( i = 0; i < 30; i++)
		{
			System.out.print("=");
		}

		System.out.print(" ORDER INFORMATION ");

		for ( i = 0; i < 30; i++)
		{
			System.out.print("=");
		}
		System.out.println();
		for (int i = 0; i < order.size(); i++) {
			order.get(i).print();
		}
	}

	public void Search() {
		System.out.println();
		for ( i = 0; i < 28; i++)
		{
			System.out.print("=");
		}

		System.out.print(" TOTAL BILL FOR TABLE ");

		for ( i = 0; i < 28; i++)
		{
			System.out.print("=");
		}


		System.out.println();
		Scanner input=new Scanner(System.in);
		String tablecode;
		int i, flag=0;
		System.out.print("Enter Table Code(Ex: Table-1) to Know Total Bill: ");
		tablecode = input.nextLine();

		for ( i = 0; i < order.size(); i++) {
			if (order.get(i).tablecode.equals(tablecode)) {
				order.get(i).print();
				flag++;
			}
		}
		if (flag==0) {
			System.out.println("No Table Available."+tablecode);
		}
	}
}
