#include<iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std;

class Article
{
	string content;
public:
	Article(const string& text) : content(text) {
		cout << "[article created]:" << content << endl;
	}
	void read()
	{
		cout << "[article Reading]:" << content << endl;
	}
	~Article()
	{
		cout << "[Article Deleted]: " << content << endl;
	}
};
class Suscriber
{
	shared_ptr<Article>article;
public:
	Suscriber(shared_ptr<Article>a) :article(a)
	{
		cout << "[article created]:" << endl;
	}
	void readArticle() const {
		if (article)
			article->read();
		else
			cout << "No article to read." << endl;
	}
	~Suscriber() {
		cout << "[Subscriber Deleted]" << endl;
	}
};

int main() {
	shared_ptr<Article> article = make_shared<Article>("Breaking News: C++ Rocks!");

	{
		Suscriber s1(article);
		Suscriber s2(article);
		Suscriber s3(article);

		s1.readArticle();
		s2.readArticle();
		s3.readArticle();

		cout << "Use count (shared_ptr): " << article.use_count() << endl;
	}

	// All subscribers out of scope; article should be deleted
	cout << "After all subscribers are gone..." << endl;
	cout << "Use count (shared_ptr): " << article.use_count() << endl;

	return 0;
}
