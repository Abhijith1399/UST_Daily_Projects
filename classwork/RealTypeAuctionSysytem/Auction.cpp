#include"Aution.h"

Auction::Auction(string itemname,int minamnt):itemname(itemname),minamnt(minamnt){}


bool Auction::operator<(const Bid& ob1,const Bid& ob2) const
{
	return ob1.getBidAmnt() << ob2.getBidAmnt();
}
void Auction:: takeBid(Buyer&, int)
{

}
void Auction::resultDeclaration()
{

}