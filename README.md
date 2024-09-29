# PillBuddy

## Inspiration

While brainstorming for our hackathon, we identified a significant issue in the U.S.—the misuse and abuse of prescription medications. Many patients become dependent on certain drugs, and when it's time to stop, they struggle to manage their medication intake, often leading to misuse. Our goal with PillBuddy is to solve this problem by creating a system that ensures patients take their medications responsibly, with the correct dosage, and on time.

## What it does

PillBuddy is an app connected to an automated dispenser that helps users manage their medications. The app stores the user’s medical history and prescription details and sends timely reminders for medication. With the press of a button, the app triggers the dispenser to release the exact dosage needed. It also tracks medication adherence and adjusts future reminders based on the user's habits. Additional features include a chatbot to address basic health concerns and a scheduling tool for doctor appointments, allowing healthcare providers to review the patient’s medication history during checkups.

## How we built it

We developed PillBuddy as an automated medication dispenser that integrates with a companion app. When the app sends a signal to the server, the server instructs the Arduino, which then activates the dispensing mechanism to release the medication. To enhance the user experience, we utilized AI tools to develop the UI and UX of the app, ensuring it is intuitive and user-friendly. The Arduino is connected to an ESP12 module, enabling wireless communication between the app and the server. 

## Challenges we ran into

The biggest challenge we encountered was connecting the Arduino-powered dispenser with the server and ensuring seamless communication between the app and the dispenser. It required extensive troubleshooting to synchronize the two systems for accurate dosage control. Additionally, managing secure data transmission, simplifying the user interface for a broad audience, and developing a reliable chatbot for basic inquiries were all challenges we had to address.

## Accomplishments that we're proud of

We’re proud of building a fully functional system that integrates hardware and software to address a real-world issue. We successfully connected the app and the dispenser, creating a secure, user-friendly medication management solution.

## What we learned

Throughout the project, we learned how to deploy and manage a server to handle real-time communication between the app and the dispenser. We mastered using the ESP12 module to connect our hardware to the internet and programmed the Arduino to control a servo motor for precise medication dispensing. We also explored using AI tools to assist in developing the UI/UX for our app, helping us create a user-friendly and visually appealing design. Additionally, we learned how to use Adobe Express for presentations and refined our skills in crafting effective prompts for ChatGPT. Finally, this project taught us valuable lessons in teamwork, effective communication, and task delegation.

## What's next for PillBuddy

Next, we plan to integrate machine learning algorithms to personalize medication reminders based on user behavior, enhancing notification effectiveness while improving the chatbot’s ability to address complex health concerns. We will refine the dispenser's design and functionality for real-world use and collaborate with healthcare providers for pilot testing. Additionally, we aim to integrate Pill Buddy with smart home ecosystems like Google Home and Amazon Alexa, while implementing security measures to prevent tampering and misuse of medications.

