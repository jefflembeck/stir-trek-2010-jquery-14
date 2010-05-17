using namespace std;

int main (void) {


	
	int a [6] = { -4, -5, 10, -6, 7, -9 };
	int b [6];
	int size = sizeof(a);
	for (int i = 0; i < size; i++)
	{
		if (a[i] < 0)
		{
			b[i] = a[i]*-1;
		} else {
			b[i] = a[i];			
		}
		cout << b[i] << " ";
	}

	return 0;
}