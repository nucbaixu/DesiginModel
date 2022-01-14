#ifndef _ALG_INTERFACE_
#define _ALG_INTERFACE_

class AlgInterfaceImpl;
class AlgInterface
{
private:
    AlgInterfaceImpl *impl;
    AlgInterface(const AlgInterface& );
	void operator=(const AlgInterface &);
public:
    AlgInterface(/* args */);
    ~AlgInterface();

    void operate1();
};
#endif