#include "MyForm.h"

using namespace ToDomaru;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew MyForm());
	return 0;
}