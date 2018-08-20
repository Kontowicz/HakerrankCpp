#pragma once
#include <iostream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

class Message {
private:
	std::string text;
	static int id;
	int cur_id;
public:
	Message() { cur_id = ++id; }
	Message(std::string t) { cur_id = ++id; text = t; }
	const std::string& get_text() {
		return text;
	}
	// overloaded < operator
	bool operator < (const Message& M2) {
		if (cur_id < M2.cur_id)
			return true;
		else
			return false;
	}
};

int Message::id = 0;

class MessageFactory {
public:
	MessageFactory() {}
	Message create_message(const std::string& text) {
		Message mes = Message(text);
		return mes;
	}
};

class Recipient {
public:
	Recipient() {}
	void receive(const Message& msg) {
		messages_.push_back(msg);
	}
	void print_messages() {
		fix_order();
		for (auto& msg : messages_) {
			std::cout << msg.get_text() << std::endl;
		}
		messages_.clear();
	}
private:
	void fix_order() {
		std::sort(messages_.begin(), messages_.end());
	}

	std::vector<Message> messages_;
};

class Network {
public:
	static void send_messages(std::vector<Message> messages, Recipient& recipient) {
		// simulates the unpredictable network, where sent messages might arrive in unspecified order
		random_shuffle(messages.begin(), messages.end());
		for (auto msg : messages) {
			recipient.receive(msg);
		}
	}
};

void messages_order()
{
	MessageFactory message_factory;
	Recipient recipient;
	std::vector<Message> messages;
	std::string text;
	while (getline(std::cin, text)) {
		messages.push_back(message_factory.create_message(text));
	}
	Network::send_messages(messages, recipient);
	recipient.print_messages();
}
