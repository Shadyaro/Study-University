## Session

* A web session is online storage that save all this interaction that you are have with this website.

    - Ex: adding items to a shopping cart. 

* The session begins when the connection is established at both end point, and terminates when the connection is ended.
  
* Advantage of web session

    - To avoid storing massive amounts of information in-browser, developers use session IDs to store information server-side.

    - Fast ( request and response ) at time. 

* The Session ID is embedded in the URL means the client side is receive/get this Session ID through HTTP GET requests when client click to the link.

* Example Session ID

    - Example: http://www.example.com/news.asp?article=27781;sessionid=IE60012219

* The server side is get this information through HTTP POST request for the target session id.

* Type of the Session ID:
    
    - Generating random ID’s: in this type of session ID the session is generate randomly and the session for there user can be randomly generate at specific time by strong cryptographically algorithm
     
    - Session ID length: as long as the length of the session is long the harder the session will be to crack, session ID’s consisting of over 50 random characters in length are recommended – but make them longer if the opportunity exists. 

## What is session hijacking?

* ( Session hijacking also known as Cookie hijacking or Cookie side-jacking ) it is type of man-in-the-middle which gives the attacker to gain access to the victim’s web sessions.

## Example of Session Hijacking

* A session attack advantage of data leaks in the compression ratio of TLS requests.

## Session Hijacking Phases

1. Sniffing
2. Monitoring
3. Forcing the target to go offline
4. Session failure

## Session Hijacking Phases

1. Sniffing: Hackers use sniffing tools like Wireshark to find session information and capture traffic.

2. Monitoring: monitoring the vulnerabilities and protocols that can be exploited.

3. Session failure(Retrieval): use the available data and information to find the valid session ID.

4. Prediction of session ID(Stealing session ID): Man in the middle attack, cross-site scripting, brute force attacks, etc. is used to steal the session IDs.

5. Forcing the target to go offline: After predicting the session ID, the hackers launch a DoS attack to force the user to go offline.

6. Hijacking: It is the final stage where the hackers take over the session between the user and the server.

## Session Hijacking Types: 

* Active Session Hijacking: controlling the overall session of a network for the targeted user.

* Passive Session Hijacking: monitoring the communication between a user and a server.

* Hybrid Hijacking: The combination of Active Session Hijacking and Passive Session Hijacking

## Session Side-Jacking (Active)

* the hijacker needs to have access to the user’s network traffic.

## Session Fixation(Active)

* In this type of attack, attackers create a session ID, and the user uses this session ID after being tricked.

## Brute Force

* This works mainly done if the website or the target user uses predictable (unchangable) session Ids.

## Man in the Browser(Hybrid)

* This is also known as Man in the Middle Attacks or Malware. Here, the attacker infects the user’s computer with malware and viruses

## IP Spoofing

* This is also known as Man in the Middle IP spoofing, or IP address spoofing, refers to the creation of Internet Protocol (IP) packets with a false source IP address to impersonate another computer system.



