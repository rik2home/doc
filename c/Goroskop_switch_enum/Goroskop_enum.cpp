#include <iostream>
using namespace std;

enum zodiak { Aries = 1, Leo, Sagittarius, Taurus, Virgo, Capricorn, Gemini, Libra, Aquarius, Cancer, Scorpio, Pisces };

void main()
{
	int horoscop;

	cout << "Enter you number\n"
		 << "1. Aries\n"
		 << "2. Leo\n"
		 << "3. Sagittarius\n"
		 << "4. Taurus\n"
		 << "5. Virgo\n"
		 << "6. Capricorn\n"
		 << "7. Gemini\n"
		 << "8. Libra\n"
		 << "9. Aquarius\n"
		 << "10. Canser\n"
		 << "11. Scorpio\n"
		 << "12. Pisces\n"
		 << "Your choise: ";
	cin >> horoscop;

	switch (horoscop)
	{
	case Aries:
		cout << "Aries - Feel like you're tripping over your own tongue? That's not surprising, considering the constant\n"
			 << "flow of verbosity that's spilling forth from you right now. Go ahead and enjoy your extreme eloquence\n"
			 << "-- everyone else is.\n";
		break;
	case Leo:
		cout << "Leo - You may feel ready to move into a decisive new leadership role, but the stars say to let things gestate\n"
			 << "for a little while longer before you make your big move. Try talking things over with your boon companions and\n"
			 << "hear what they have to say.\n";
		break;
	case Sagittarius:
		cout << "Sagittarius - Having this much activity going on around you can be somewhat unsettling, but don't sulk.\n"
			 << "Just because something seems out of sync doesn't mean it'll be that way permanently. Wait it out and you'll feel\n"
			 << "things start to jell.\n";
		break;
	case Taurus:
		cout << "Taurus - Having this much activity going on around you can be somewhat unsettling, but don't sulk.\n"
			 << "Just because something seems out of sync doesn't mean it'll be that way permanently. Wait it out and you'll feel\n"
			 << "things start to jell.\n";
		break;
	case Virgo:
		cout << "Virgo - Having this much activity going on around you can be somewhat unsettling, but don't sulk.\n"
			 << "Just because something seems out of sync doesn't mean it'll be that way permanently. Wait it out and you'll feel\n"
			 << "things start to jell.\n";
		break;
	case Capricorn:
		cout << "Capricorn - Having this much activity going on around you can be somewhat unsettling, but don't sulk.\n"
			 << "Just because something seems out of sync doesn't mean it'll be that way permanently. Wait it out and you'll feel\n"
			 << "things start to jell.\n";
		break;
	case Gemini:
		cout << "Gemini  - Having this much activity going on around you can be somewhat unsettling, but don't sulk.\n"
			 << "Just because something seems out of sync doesn't mean it'll be that way permanently. Wait it out and you'll feel\n"
			 << "things start to jell.\n";
		break;
	case Libra:
		cout << "Libra  - Having this much activity going on around you can be somewhat unsettling, but don't sulk.\n"
			 << "Just because something seems out of sync doesn't mean it'll be that way permanently. Wait it out and you'll feel\n"
			 << "things start to jell.\n";
		break;
	case Aquarius:
		cout << "Aquarius - Having this much activity going on around you can be somewhat unsettling, but don't sulk.\n"
			 << "Just because something seems out of sync doesn't mean it'll be that way permanently. Wait it out and you'll feel\n"
			 << "things start to jell.\n";
		break;
	case Cancer:
		cout << "Cancer - Having this much activity going on around you can be somewhat unsettling, but don't sulk.\n"
			 << "Just because something seems out of sync doesn't mean it'll be that way permanently. Wait it out and you'll feel\n"
			 << "things start to jell.\n";
		break;
	case Scorpio:
		cout << "Scorpio - Having this much activity going on around you can be somewhat unsettling, but don't sulk.\n"
			 << "Just because something seems out of sync doesn't mean it'll be that way permanently. Wait it out and you'll feel\n"
			 << "things start to jell.\n";
		break;
	case Pisces:
		cout << "Pisces - Having this much activity going on around you can be somewhat unsettling, but don't sulk.\n"
			 << "Just because something seems out of sync doesn't mean it'll be that way permanently. Wait it out and you'll feel\n"
			 << "things start to jell.\n";
		break;
	default:
		cout << "Enter correct number!!!\n";
	}
}