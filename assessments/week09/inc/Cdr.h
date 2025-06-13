#pragma once
#include<iostream>
#include<map>
#include<vector>

using namespace std;
class CDR
{
private:
	int msisdn;
	string network;
	int callerNum;
	int SMSMO;
	int GPRS;
	int datadownload;
	int dataupdated;
	int recevernum;
	int receverNetwork;

	map<string, vector<int>>Cdr;
public:
	CDR()
	{
		this->callerNum = callerNum;
		this->msisdn = msisdn;
		this->network = network;
		this->datadownload = datadownload;
		this->dataupdated = dataupdated;
		this->SMSMO = SMSMO;
		this->receverNetwork = receverNetwork;
		this->recevernum = recevernum;
		this->GPRS = GPRS;
	}

	int  getmsisdn() { return msisdn; };
	string getnetwork() { return network; };
	int  getdatadownload() { return datadownload; };
	int  getdataupdated() { return dataupdated; };
	int  getSMSMO() { return SMSMO; };
	int  getreceverNetwork() { return receverNetwork; };
	int  getrecevrnum() { return recevernum; };
	int  getGPRS() { return GPRS; };
	int  getcallerNum() { return callerNum; };



	void readCDR(map<string, vector<int>>&Cdr);
	void BillingInfoCustomer(map<string, vector<int>>&Cdr);
	void BillingInfointeroperator(map<string, vector<int>>&Cdr);
	void serachMSISDN(map<string, vector<int>>& Cdr);
	void processData(map<string, vector<int>>& Cdr);
	void menu(map<string, vector<int>>&Cdr);

};
