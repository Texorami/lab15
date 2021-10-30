int main() {

}
bool is_leap(int y)
{
	assert(y > 0);
	return ((y % 4 == 0) && ((y % 100 > 0) || (y % 400 == 0)));
}
int SecondsInMinute() { return 60; }
int DaysInYear{ int y }{
	if (is_leap(y))
	{
		return 366;
	}
	else return 365;
}
int DaysInYearRange(int y1, int y2) {
	int answer;
	for (int i = y1; i < y1+y2; i++)
	{
		answer += DaysInYear(i);
	}
	return answer;
}