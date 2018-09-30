#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;

namespace _24
{
	class  BadLengthException : public std::exception {
	public:
		BadLengthException(int &n)
		{
			err = n;
		}

		int what()
		{
			return err;
		}
	private:
		int err;
	};

	bool checkUsername(string username) {
		bool isValid = true;
		int n = username.length();
		if (n < 5) {
			throw BadLengthException(n);
		}
		for (int i = 0; i < n - 1; i++) {
			if (username[i] == 'w' && username[i + 1] == 'w') {
				isValid = false;
			}
		}
		return isValid;
	}

	void inherited_code()
	{
		int T; cin >> T;
		while (T--) {
			string username;
			cin >> username;
			try {
				bool isValid = checkUsername(username);
				if (isValid) {
					cout << "Valid" << '\n';
				}
				else {
					cout << "Invalid" << '\n';
				}
			}
			catch (BadLengthException e) {
				cout << "Too short: " << e.what() << '\n';
			}
		}
	}
}