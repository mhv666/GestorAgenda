#ifndef CTRBASE_H
#define CTRBASE_H
#include <string>

class CtrBase
{

private:

void crearBase(std::string name);
void cargarBase(std::string name);
public:

bool checkNameBase(std::string name);
int checkMenuBase(std::string name);



};








#endif // CTRBASE_H_INCLUDED
