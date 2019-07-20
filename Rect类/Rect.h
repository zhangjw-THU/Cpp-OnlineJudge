class Rect{
public:
	Rect(const float& top,const float& left,const float& bottom,const float& right);
	~Rect(){
	}

	float getTop() {
		return top;
	}
	float getLeft(){
		return left;
	}
	float getBottom(){
		return bottom;
	}
	float grtRight(){
		return right;
	}

	void setTop(float top){
		this->top=top;
	}
	void setLeft(float left){
		this->left=left;
	}
	void setBottom(float bottom){
		this->bottom=bottom;
	}
	void setRight(float right){
		this->right=right;
	}

	float getArea();

private:
	float top;
	float left;
	float bottom;
	float right;
};
Rect::Rect(const float& top,const float& left,const float& bottom,const float& right){
	this->top=top;
	this->left=left;
	this->bottom=bottom;
	this->right=right;
}
float Rect::getArea(){
	float width=right-left;
	float height=top-bottom;
	return (width*height);
};