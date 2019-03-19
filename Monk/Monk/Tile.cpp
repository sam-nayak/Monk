class Tile
{
	private:	
	
		int cTileX;
		int cTileY;
		bool cSolid = true;
		int cLeft;
		int cTop;

	public:

		Tile(int tileX, int tileY, bool solid, int top, int left)
		{
			cTileX = tileX;
			cTileY = tileY;
			cSolid = solid;
			cLeft = left;
			cTop = top;
		}

		void setTileX(int value) 
		{
			cTileX = value;
		 }

		int getTileX() 
		{
			return cTileX;
		}

		void setTileY(int value) 
		{
			cTileY = value;
		}

		int getTileY() 
		{
			return cTileY;
		}

		void setSolid(bool value) 
		{
			cSolid = value;
		}

		bool getSolid() 
		{
			return cSolid;
		}

		void setLeft(int value) 
		{
			cLeft = value;
		}

		int getLeft() {
			return cLeft;
		}

		void setTop(int value) 
		{
			cTop = value;
		}

		int getTop() 
		{
			return cTop;
		}
};