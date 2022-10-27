INSERT INTO vehicles
VALUES("CYG739IKAH1528F09","HWS579T","Sedan", "Large", "Mercedes","e550", "Black", 30, "yes", 5, 6, "Automatic");
INSERT INTO vehicles
VALUES("CYG739IKAH1528B32","HWS584I","SUV", "Small", "Honda","CRV", "Blue", 33, "no", 5, 6, "Automatic");
INSERT INTO vehicles
VALUES("AYG739IKAH1528Z91","SWS5840","coupe", "Small", "Chevrolet","Camaro", "Black", 17, "yes", 4, 8, "Manual");
INSERT INTO vehicles
VALUES("KYG739IKAH1528K01","OGS584P","coupe", "Small", "Ford", "Mustang", "Red", 16, "yes", 4, 8, "Manual");
INSERT INTO vehicles
VALUES("KYG739IKAH1528K02","TGS589L","coupe", "Small", "Nissan", "370z", "White", 19, "no", 2, 6, "Manual");



INSERT INTO customers
VALUES("FDB7Y59","Ali","Tahami", 24, "Irvine", 15, "1234 Where In The World AVE", "California", "92604");
INSERT INTO customers
VALUES("FDB734Y","Kanwaljeet","Ahluwalia", 36, "Fullerton", NULL, "45783 Chuck Norris Cir.", "California", "92835");
INSERT INTO customers
VALUES("FDB71lZ","Griffin","Peter", 40, "Quahog", NULL, "31 Spooner Street", "Rhode Island", "00093");
INSERT INTO customers
VALUES("FDB709M","Kim","Crystal", 24, "Garden Grove", NULL, "1345 New Land", "Nevada", "95194");


INSERT INTO transactions
VALUES("WR359VG96U",'2023-01-10', '13:30:10');
INSERT INTO transactions
VALUES("WR359VG54T",'2023-01-15', '15:30:40');
INSERT INTO transactions
VALUES("WR359VG28R",'2023-02-15', '19:30:08');
INSERT INTO transactions
VALUES("CRR359VG23",'2023-02-15', '20:01:32');

INSERT INTO wantsToRent
VALUES("FDB7Y59","HWS579T", "CYG739IKAH1528F09");
INSERT INTO wantsToRent
VALUES("FDB734Y","HWS584I", "CYG739IKAH1528B32");
INSERT INTO wantsToRent
VALUES("FDB71lZ","SWS5840", "AYG739IKAH1528Z91"); 
INSERT INTO wantsToRent
VALUES("FDB709M","OGS584P", "KYG739IKAH1528K01");

INSERT INTO willMakeTransaction
VALUES("FDB7Y59","WR359VG96U");
INSERT INTO willMakeTransaction
VALUES("FDB734Y","WR359VG54T");
INSERT INTO willMakeTransaction
VALUES("FDB71lZ","WR359VG28R");
INSERT INTO willMakeTransaction
VALUES("FDB709M","CRR359VG23");

INSERT INTO beingRented
VALUES("WR359VG96U","HWS579T", "CYG739IKAH1528F09", 1);
INSERT INTO beingRented
VALUES("WR359VG54T","HWS584I", "CYG739IKAH1528B32", 1);
INSERT INTO beingRented
VALUES("WR359VG28R","SWS5840", "AYG739IKAH1528Z91", 1);
INSERT INTO beingRented
VALUES("CRR359VG23","OGS584P", "KYG739IKAH1528K01", 1);



