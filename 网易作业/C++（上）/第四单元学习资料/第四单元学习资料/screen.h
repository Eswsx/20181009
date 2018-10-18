
class Screen {
	public:
		void setWidth(int width);
		void setHight(int hight);
		int getWidth();
		int getHight();
		Screen(int width, int hight);
		Screen();

	private:
		int width;
		int hight;
};