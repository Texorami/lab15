int main() {

}bool is_leap(int y)
{
	assert(y > 0);
	return ((y % 4 == 0) && ((y % 100 > 0) || (y % 400 == 0)));
}