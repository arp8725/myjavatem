public class MobileManufacturing {

    public static void main(String[] args) {
        Processor proc = new Processor("Snapdragon 865");
        Battery batt = new Battery("4000 mAh");
        Screen scrn = new Screen("AMOLED");

        MobileFactory factory = new MobileFactory();
        MobilePhone phone = factory.manufactureMobile(proc, batt, scrn);

        System.out.println("Manufactured Mobile Phone: " + phone);

        // Using mobile phone methods
        phone.powerOn();
        phone.checkStatus();
        phone.displayInfo();
        phone.powerOff();
    }
}

class MobileFactory {

    MobilePhone manufactureMobile(Processor processor, Battery battery, Screen screen) {
        System.out.println("Mobile manufacturing in progress...");
        MobilePhone phone = new MobilePhone();
        phone.setProcessor(processor);
        phone.setBattery(battery);
        phone.setScreen(screen);
        return phone;
    }

    MobilePhone customizeMobile(Processor processor, Battery battery, Screen screen, String customFeature) {
        System.out.println("Customizing mobile phone...");
        MobilePhone phone = manufactureMobile(processor, battery, screen);
        phone.setCustomFeature(customFeature);
        return phone;
    }
}

class Processor {
    private String model;

    public Processor(String model) {
        this.model = model;
    }

    @Override
    public String toString() {
        return "Processor [model=" + model + "]";
    }
}

class Battery {
    private String capacity;

    public Battery(String capacity) {
        this.capacity = capacity;
    }

    @Override
    public String toString() {
        return "Battery [capacity=" + capacity + "]";
    }
}

class Screen {
    private String type;

    public Screen(String type) {
        this.type = type;
    }

    @Override
    public String toString() {
        return "Screen [type=" + type + "]";
    }
}

class MobilePhone {
    private Processor processor;
    private Battery battery;
    private Screen screen;
    private boolean poweredOn;
    private String customFeature;

    public void setProcessor(Processor processor) {
        this.processor = processor;
    }

    public void setBattery(Battery battery) {
        this.battery = battery;
    }

    public void setScreen(Screen screen) {
        this.screen = screen;
    }

    public void setCustomFeature(String customFeature) {
        this.customFeature = customFeature;
    }

    public void powerOn() {
        System.out.println("Mobile phone is powering on...");
        poweredOn = true;
    }

    public void powerOff() {
        System.out.println("Mobile phone is powering off...");
        poweredOn = false;
    }

    public void checkStatus() {
        System.out.println("Mobile phone is " + (poweredOn ? "powered on" : "powered off"));
    }

    public void displayInfo() {
        System.out.println("Mobile Phone Information:");
        System.out.println(processor);
        System.out.println(battery);
        System.out.println(screen);
        if (customFeature != null && !customFeature.isEmpty()) {
            System.out.println("Custom Feature: " + customFeature);
        }
    }

    @Override
    public String toString() {
        return "MobilePhone [processor=" + processor + ", battery=" + battery + ", screen=" + screen + "]";
    }
}





CREATE DATABASE EMPLOYEE;

USE EMPLOYEE;

CREATE TABLE EMP(Empid tinyint, Name varchar(20),Marks tinyint);

SELECT * FROM EMP;

INSERT INTO EMP VALUES(1,'Aditya',99);
INSERT INTO EMP VALUES(2,'Akash',97);
INSERT INTO EMP VALUEs(3,'Deepika',88);

INSERT INTO EMP(Empid,NAME,Marks) VALUES(4,'SHIVAM',91);
INSERT INTO EMP(Empid,NAME,Marks) VALUES(5,'VINAY',93);
INSERT INTO EMP(Empid,NAME,Marks) VALUES(6,'CHAYAN',81);

INSERT INTO EMP VALUES(7,'Jack',87),(8,'Shiv',85),(9,'Pramod',82),(10,'Sahil',84);

SELECT * FROM EMP;

--COMPARISONS
SELECT * FROM EMP;
SELECT * FROM EMP WHERE Marks = 91;
SELECT * FROM EMP WHERE Marks < 91;
SELECT * FROM EMP WHERE Marks > 91;
SELECT * FROM EMP WHERE Marks >= 81;
SELECT * FROM EMP WHERE Marks <> 99;
SELECT * FROM EMP WHERE Marks between 91 and 97;
SELECT * FROM EMP WHERE Marks not between 91 and 99;
SELECT * FROM EMP WHERE Marks in(91,99,93);
SELECT * FROM EMP WHERE Marks not in(91,99,93);

INSERT INTO EMP(Empid,NAME) VALUES(11,'ROBIN');
SELECT * FROM EMP;
SELECT * FROM EMP WHERE Marks is null;
SELECT * FROM EMP WHERE Marks is not null;


--Like Operator
SELECT * FROM EMP WHERE Name like '%A';
SELECT * FROM EMP WHERE Name like 'A%';
SELECT * FROM EMP WHERE Name like '%A%';
SELECT * FROM EMP WHERE Name like 'Ad%';
SELECT * FROM EMP WHERE Name like '%';
SELECT * FROM EMP WHERE Name like 'A%itya';

SELECT * FROM EMP WHERE Name like 'A_itya';

SELECT * FROM EMP WHERE Name like 'a[dxy]itya';
SELECT * FROM EMP WHERE Name like 'a[^xyz]itya';

--Logical Operator
SELECT * FROM EMP WHERE Name like 'A%' and Marks>90;
SELECT * FROM EMP WHERE Name like 'A%' or Marks>90;

SELECT * FROM EMP WHERE not Marks>90;

--Arithmetic Operator
SELECT * FROM EMP WHERE Marks>=35;
SELECT * FROM EMP WHERE Marks+1>35;

SELECT Marks , Marks+1 FROM EMP;
SELECT Marks , Marks+1 AS AddedCol FROM EMP;
SELECT Marks , Marks*2 AS Multipliedcol FROM EMP;

SELECT * FROM EMP;

--Order BY
SELECT * FROM EMP order by Empid;
SELECT * FROM EMP order by Empid desc;

SELECT * FROM EMP order by Marks;

--Update
UPDATE EMP SET MARKS = 79 WHERE Empid = 11;
SELECT * FROM EMP;

--Delete
INSERT INTO EMP VALUES(12,'VINASH',60);
SELECT * FROM EMP;
DELETE EMP WHERE Empid = 12;
SELECT * FROM EMP;

--ALTER
ALTER TABLE EMP ADD Salary INT;
--INSERT INTO EMP(Salary) Values(50000)
UPDATE EMP SET Salary = 50000 where Empid=1;
UPDATE EMP SET Salary = 15000 where Empid=2;
UPDATE EMP SET Salary = 3000 where Empid=3;
UPDATE EMP SET Salary = 1000 where Empid=4;
UPDATE EMP SET Salary = 2000 where Empid=5;
UPDATE EMP SET Salary = 7000 where Empid=6;
UPDATE EMP SET Salary = 80000 where Empid=7;
UPDATE EMP SET Salary = 10000 where Empid=8;
UPDATE EMP SET Salary = 90000 where Empid=9;
UPDATE EMP SET Salary = 60000 where Empid=10;
UPDATE EMP SET Salary = 100 where Empid=11;



app.component.html

<div class="container">
  <h1 class="text-light bg-dark p-3">Learning Angular Pipe</h1>
  <p>{{companyName | uppercase}}</p>
  <p>{{num | percent}}</p>
  <p>{{num | currency}}</p>
  <p>{{num | currency:"INR"}}</p>
  <p>{{student | json}}</p>
  <p>{{studentName }}</p>
  <p>{{studentName | slice:2-6}}</p>
  
  <hr>

  <!-- custom pipe -->
  <input type="text" [(ngModel)]="name" >
  <p *ngFor="let n of studentName | search: name">
    {{n}}
  </p>
  <hr>
</div>



search.pipe.ts
import { Pipe, PipeTransform } from '@angular/core';
import { Params } from '@angular/router';

@Pipe({
  name: 'search'
})
export class SearchPipe implements PipeTransform {
        // the whole array  , search:name
  transform(arr: string[], param:string): string[] 
  {
     return arr.filter((val) =>val.indexOf(param) !==-1)
  
      // return arr.filter((val) =>
      // {
      //   if(val.indexOf(param) !==-1)
      //   {
      //     return true;
      //   }
      //   else
      //   {
      //     return false;
      //   }
      // });
  }


}
