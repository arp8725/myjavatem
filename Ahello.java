// class Ahello {
//     public static void main(String[] args) {
//         System.out.println("Hello, World!"); 
//         System.out.println("Hello, ADIIII!"); 
//     }
// }


package Practice;

import java.util.Random;

public class practiceException {
    public static void main(String[] args) {
        System.out.println("---------------------------");
        System.out.println("Main Begin");
        System.out.println("---------------------------");

        carrr myc = new carrr();
        try {
            myc.longDrive();
        } catch (coolantException e) {
            System.out.println("Coolant exception...");
            e.printStackTrace();
        } catch (pucException e) {
            System.out.println("PUC exception...");
            e.printStackTrace();
        } catch (fuelException e) {
            System.out.println("Fuel exception...");
            e.printStackTrace();
        }

        System.out.println("---------------------------");
        System.out.println("End Main");
        System.out.println("---------------------------");
    }
}

class coolantException extends Exception {
    public coolantException(String message) {
        super(message);
    }
}

class pucException extends Exception {
    public pucException(String message) {
        super(message);
    }
}

class fuelException extends Exception {
    public fuelException(String message) {
        super(message);
    }
}

class SpeedLimitException extends RuntimeException {
    public SpeedLimitException(String message) {
        super(message);
    }
}

class trafficException extends RuntimeException {
    public trafficException(String message) {
        super(message);
    }
}

class TyrePressureException extends RuntimeException {
    public TyrePressureException(String message) {
        super(message);
    }
}

class carrr {
    boolean coolantStatus;
    boolean fuelStatus;
    boolean pucStatus;

    private void coolantCheck() {
        Random r = new Random();
        coolantStatus = r.nextBoolean();
    }

    private void FuelCheck() {
        Random r = new Random();
        fuelStatus = r.nextBoolean();
    }

    private void pucCheck() {
        Random r = new Random();
        pucStatus = r.nextBoolean();
    }

    carrr() throws coolantException, pucException, fuelException {
        System.out.println("Checking the engine...");
        System.out.println("Checking the coolant...");
        coolantCheck();
        if (coolantStatus) {
            System.out.println("Coolant is sufficient");
        } else {
            coolantException ex = new coolantException("Coolant needs to be refilled");
            throw ex;
        }

        System.out.println("---------------------------");
        System.out.println("Checking the PUC...");
        pucCheck();
        if (pucStatus) {
            System.out.println("PUC is up-to-date");
        } else {
            pucException px = new pucException("Action!!!!....PUC Expired...");
            throw px;
        }

        System.out.println("---------------------------");
        System.out.println("Checking the fuel...");
        FuelCheck();
        if (fuelStatus) {
            System.out.println("Fuel is sufficient");
        } else {
            fuelException fx = new fuelException("Fuel needs to be filled");
            throw fx;
        }

        System.out.println("All checks passed. Car is ready to go.");
    }

    void longDrive() {
        for (int i = 0; i <= 20; i++) {
            double val = Math.random();
            int randomno = (int) (val * 100) + 1;
            if (randomno > 60) {
                System.out.println("Your Speed is : " + randomno);
                SpeedLimitException se = new SpeedLimitException("Speed Limit exceeded....");
                throw se;
            }

            val = Math.random();
            randomno = (int) (val * 100) + 1;
            if (randomno > 40) {
                trafficException te = new trafficException("Traffic is high");
            }
        }
        System.out.println("Journey Complete.....");
    }
}

