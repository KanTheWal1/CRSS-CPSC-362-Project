CREATE TABLE vehicles (
   vVin VARCHAR(17) NOT NULL,
   plateNumber VARCHAR(7) NOT NULL,
   vType VARCHAR(10) NOT NULL,
   vSize VARCHAR(10) NOT NULL,
   vMake VARCHAR(20) NOT NULL,
   vModel VARCHAR(20) NOT NULL,
   color VARCHAR(10) NOT NULL,
   vMPG INT NOT NULL,
   vNav VARCHAR(20) NOT NULL,
   seatingCapacity INT NOT NULL,
   engineCylinders INT NOT NULL,
   transmissionType VARCHAR(10) NOT NULL,
   PRIMARY KEY(vVin),
   UNIQUE(plateNumber)
);


CREATE TABLE customers (
    driversLicenseNumber VARCHAR(8) NOT NULL,
    customerFName VARCHAR(25) NOT NULL,
    customerLName VARCHAR(25) NOT NULL,
    customerAge INT NOT NULL,
    cityOfResidence VARCHAR(20) NOT NULL,
    apartmentNumber VARCHAR(10),
    streetAddress VARCHAR(50) NOT NULL,
    stateOfResidence VARCHAR(25) NOT NULL,
    zipCode VARCHAR(10),
    PRIMARY KEY(driversLicenseNumber)
);
CREATE TABLE transactions(
    transactionID VARCHAR(10) NOT NULL,
    transactionDate DATE NOT NULL,
    transactionTime TIME NOT NULL,
    PRIMARY KEY(transactionID)
);
CREATE TABLE wantsToRent(
   DLNum VARCHAR(8) NOT NULL,
   plateNum VARCHAR(7) NOT NULL,
   VIN VARCHAR(17) NOT NULL,
   PRIMARY KEY(DLNum,plateNum,VIN), 
   FOREIGN KEY(DLNum) REFERENCES customers(driversLicenseNumber),
   FOREIGN KEY(plateNum) REFERENCES vehicles(plateNumber),
   FOREIGN KEY(VIN) REFERENCES vehicles(vVin)
);
CREATE TABLE willMakeTransaction(
   DLNumT VARCHAR(8) NOT NULL,
   tID VARCHAR(10) NOT NULL,
   PRIMARY KEY(DLNumT, tID),
   FOREIGN KEY(DLNumT) REFERENCES customers(driversLicenseNumber),
   FOREIGN KEY(tID) REFERENCES transactions(transactionID)
);

CREATE TABLE beingRented (
   transID VARCHAR(10) NOT NULL,
   plateNumb VARCHAR(7) NOT NULL,
   vVIN VARCHAR(17) NOT NULL,
   vRentCount int NOT NULL,
   PRIMARY KEY(transID, plateNumb, vVIN),
   FOREIGN KEY(transID) REFERENCES transactions(transactionID),
   FOREIGN KEY(plateNumb) REFERENCES vehicles(plateNumber),
   FOREIGN KEY(vVIN) REFERENCES vehicles(vVin)
);

