import java.util.Scanner;

public class CustomerOrder {

        public int tablecode;
        public String name;
        public String phone;
        int i;
        public float Totalpayment;
        public void setTotalpayment(float Totalpayment) {
            this.Totalpayment=Totalpayment;
        }

        public void input() {
        System.out.println();
        for ( i = 0; i < 35; i++)
        {
            System.out.print("=");
        }

        System.out.print(" ORDER FOOD ");

        for ( i = 0; i < 35; i++)
        {
            System.out.print("=");
        }
        Scanner input = new Scanner(System.in);
        System.out.println();
        System.out.print("Choose Table & Enter Table Code: ");
        tablecode = input.nextInt();
        System.out.print("Enter Your Name: ");
        name= input.nextLine();
        System.out.print("Enter Your Phone Number: ");
        phone= input.nextLine();

    }

        public void print() {
            System.out.println("Customer Name: "+this.name);
            System.out.println("Customer Phone Number: "+this.phone);
            System.out.println("Table Code: "+this.tablecode);
            System.out.println("Total Payment: "+this.Totalpayment+" BDT");
            System.out.println();
        }

    }


