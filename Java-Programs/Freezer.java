import java.util.Scanner;
import java.text.*;
public class Freezer {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		NumberFormat nf=NumberFormat.getInstance();
		Scanner sc=new Scanner(System.in);
		
	//	Freezer f=new Freezer();
float T;
int t1;
float t2;
System.out.println("Enter Time since power failure..! ");
System.out.println("Hours: ");t1=sc.nextInt();
System.out.println("Minutes: ");t2=sc.nextFloat();
sc.close();
t2=t2/60;
float hours=t1+t2;
nf.setMaximumFractionDigits(2);
System.out.println("Total time elapsed since power failure " +nf.format(hours)+"hrs");
T=(4*(hours*hours))/(hours+2)-20;
System.out.println("Temperature of the freezer =" +T +"Celsius");

	}


		
	

}
