struct box
{
	int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) {
	 return (b.length * b.height * b.width);
}

int is_lower_than_max_height(box b) {
	int x = (b.height < 41) ? 1:0;
        return x;  
}


