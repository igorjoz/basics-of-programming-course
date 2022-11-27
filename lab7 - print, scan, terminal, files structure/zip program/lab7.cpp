#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

bool isFileHeader(FILE* file) {
	uint32_t x;

	fread(&x, sizeof(x), 1, file);

	return x == 0x04034b50;
}

int main()
{
	FILE* file;
	char filename[100];

	cin >> filename;

	file = fopen(filename, "rb");
	//file = fopen("abc.abc", "w");

	if (file == NULL) {
		cout << "error, file could not be opened\n";
		return 0;
	}

	while (isFileHeader(file)) {
		fseek(file, 14, SEEK_CUR);

		uint32_t sizeCompressed;
		fread(&sizeCompressed, sizeof(uint32_t), 1, file);

		uint32_t size;
		fread(&size, sizeof(uint32_t), 1, file);

		cout << size << "\n";
		uint16_t lenN, lenM;
		fread(&lenN, sizeof(uint16_t), 1, file);
		fread(&lenM, sizeof(uint16_t), 1, file);

		fseek(file, sizeCompressed + lenN + lenM, SEEK_CUR);

		//int browsedFileLength, extraFiledLength;
		////fseek(file, 26, SEEK_SET);
		//fread(&browsedFileLength, sizeof(uint16_t), 1, file);
		//fread(&extraFiledLength, sizeof(uint16_t), 1, file);
		//cout << browsedFileLength << extraFiledLength << "\n";

		//string browsedFilename;
		////fseek(file, 30, SEEK_SET);
		//fread(&browsedFilename, sizeof(uint16_t), 1, file);
		//cout << browsedFilename << "\n";

	}
	fclose(file);
}
