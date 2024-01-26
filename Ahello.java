// class Ahello {
//     public static void main(String[] args) {
//         System.out.println("Hello, World!"); 
//         System.out.println("Hello, ADIIII!"); 
//     }
// }


package Practice;

import java.util.Random;

public class practiceException 
{
	public static void main(String[] args) 
	{
		System.out.println("---------------------------");
		System.out.println("Main Begin");
		System.out.println("---------------------------");
		
		
		carrr myc = new carrr();
		try 
		{
			myc = new carrr();
			myc.longDrive();
		} 
		catch (coolantException e) 
		{
			System.out.println("Coolant exception...");
			e.printStackTrace();
		} 
		catch (pucException e) 
		{
			System.out.println("PUC exception...");
			e.printStackTrace();
		} 
		catch (fuelException e) 
		{
			System.out.println("Fuel exception...");
			e.printStackTrace();
		}
		
//		if(myc != null)
//		{
//				myc.longDrive();
//				System.out.println("Car is ready......move on.");
//		}
//		else
//		{
//			System.out.println("Car not ready...");
//		}

		System.out.println("---------------------------");
		System.out.println("End Main");
		System.out.println("---------------------------");
}

class coolantException extends Exception
{
	public coolantException(String message) {
		super(message);
		// TODO Auto-generated constructor stub
	}
}

class pucException extends Exception
{

	public pucException(String message) {
		super(message);
		// TODO Auto-generated constructor stub
	}
}

class fuelException extends Exception
{

	public fuelException(String message) {
		super(message);
		// TODO Auto-generated constructor stub
	}
}

class SpeedLimitException extends RuntimeException
{

	public SpeedLimitException(String message) {
		super(message);
		// TODO Auto-generated constructor stub
	}
}

class trafficException extends RuntimeException
{

	public trafficException(String message) {
		super(message);
		// TODO Auto-generated constructor stub
	}
}

class TyrePressureException extends RuntimeException
{

	public TyrePressureException(String message) {
		super(message);
		// TODO Auto-generated constructor stub
	}
}



class carrr
{
	boolean coolantStatus;
	boolean fuelStatus;
	boolean pucStatus;
	
	private void coolantCheck()
	{
		Random r = new Random();
		coolantStatus = r.nextBoolean();
	}
	
	private void FuelCheck()
	{
		Random r = new Random();
		coolantStatus = r.nextBoolean();
	}
	
	private void pucCheck()
	{
		Random r = new Random();
		coolantStatus = r.nextBoolean();
	}
	
	carrr() throws coolantException, pucException, fuelException
	{
		System.out.println("Cheking the engine...");
		System.out.println("checking the coolant...");
		coolantCheck();
		if (coolantStatus == true) 
		{
			System.out.println("Coolant is sufficient");
		}
		else 
		{
			coolantException ex = new coolantException("Coolant need to be refilled");
			throw ex;
		}
	
		System.out.println("---------------------------");
		System.out.println("checking the PUC...");
		FuelCheck();
		if (pucStatus == true) 
		{
			System.out.println("PUC IS UPTODATE");
		}
		else 
		{
			pucException px = new pucException("Action!!!!....PUC Expired...");
			throw px;
		}

		
		System.out.println("---------------------------");
		System.out.println("checking the fuel...");
		FuelCheck();
		if (fuelStatus == true) 
		{
			System.out.println("fuel is sufficient");
		}
		else 
		{
			fuelException fx = new fuelException("Fuel need to be filled");
			throw fx;
		}
		
		System.out.println("all ok...");
	}
}

void longDrive()
{
	for(int i=0;i<=20;i++)
	{
		double val = Math.random();
		int randomno = (int)(val*100)+1;
		if(randomno>60)
		{
			System.out.println("your Speed is : "+randomno);
			SpeedLimitException se = new SpeedLimitException("Speed Limit exceeded....");
			throw se;
		}
		
		val = Math.random();
		randomno = (int)(val*100)+1;
		if(randomno>40)
		{
			trafficException te = new trafficException("Traffic is high");
		}
	}
	System.out.println("Journey Complete.....");
	
}
}
