#include <stdio.h>

int main(void)
{
	int iEngS[2][4] = { { 100, 80, 65, 77 }, { 45, 98, 35, 88 } };
	int iSum, iMax, iCount1, iCount2;
	float fAvg;

	for (iCount1 = 0; iCount1 < 2; iCount1++)
	{
		iSum = 0;
		iMax = 0;

		for (iCount2 = 0; iCount2 < 4; iCount2++)
		{
			iSum += iEngS[iCount1][iCount2];
			if (iMax < iEngS[iCount1][iCount2])
				iMax = iEngS[iCount1][iCount2];
		}
		fAvg = (float)iSum / 4;

		printf("학생%d의 총점은 %d점, 평균은 %.2f점, 최고점은 %d점입니다.\n", iCount1 + 1, iSum, fAvg, iMax);
	}

	return 0;
}
