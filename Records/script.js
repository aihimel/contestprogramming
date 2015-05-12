var Data = {
	'header' : ['Id', 'Difficulty', 'Problem', 'Date', 'Solution'],
	'data' : [ // round, difficulty, name, date, solution_id
		['435', 'A', 'Queye On Bus Stop', '07/12/2014', '8743356'],
		['282', 'A', 'Bit++', '07/12/2014', '8485319'],
		['266', 'A', 'Stone On The Table', '07/12/2014', '8485655'],
		['231', 'A', 'Team', '07/12/2014', '8477033'],
		['158', 'A', 'Next Round', '07/12/2014', '8467562'],
		['133', 'A', 'HQ9+', '07/12/2014', '8490885'],
		['131', 'A', 'Caps Lock', '07/12/2014', '8477852'],
		['118', 'A', 'String Task', '07/12/2014', '8471385'],
		['116', 'A', 'Tram', '07/12/2014', '8477184'],
		['112', 'A', 'Ptay And String', '07/12/2014', '8491140'],
		['96', 'A', 'Football', '07/12/2014', '8490150'],
		['71', 'A', 'Way Too Long Word', '07/12/2014', '8467927'],
		['50', 'A', 'Domino Piling', '07/12/2014', '8476914'],
		['148', 'A', 'Insomnia Cure', '07/12/2014', '8871541'],
		['160', 'A', 'Twins', '07/12/2014', '8871920'],
		['281', 'A', 'Word Capitalization', '07/12/2014', '8872226'],
		['236', 'A', 'Boy Or Girl', '07/12/2014', '8875282'],
		['236', 'A', 'Boy Or Girl', '07/12/2014', '8875282'],
		['110', 'A', 'Nearly Lucky Number', '07/12/2014', '8875354'],
		['271', 'A', 'Beautiful Year', '07/12/2014', '8880354'],
		['276', 'A', 'Lunch Rush', '07/12/2014', '8949475'],
		['460', 'A', 'Vasya And Socks', '07/12/2014', '9055924'],
		['228', 'A', 'Is Your Horseshoe On The Other Hoof', '07/12/2014', '9056157'],
		['467', 'A', 'George and Accomodation', '07/12/2014', '9056266'],
		['472', 'A', 'Designe Tutorial', '07/12/2014', '9056408'],
		['58', 'A', 'Chat Room', '07/12/2014', '9056702'],
		['122', 'A', 'Lucky Division', '08/12/2014', '9056993'],
		['263', 'A', 'Beautiful Matrix', '08/12/2014', '9069165'],
		['144', 'A', 'Arrival of The General', '08/12/2014', '9069725'],
		['344', 'A', 'Magnets', '08/12/2014', '9079026'],
		['61', 'A', 'Ultra-Fast Mathamatician', '08/12/2014', '9079150'],
		['41', 'A', 'Translation', '09/12/2014', '9124207'],
		['268', 'A', 'Games', '09/12/2014', '9124650'],
		['451', 'A', 'Game With Sticks', '09/12/2014', '9124826'],
		['141', 'A', 'Amusing Joke', '09/12/2014', '9138080'],
		['208', 'A', 'Dubstep', '09/12/2014', '9195666'],
		['69', 'A', 'Young Physicst', '10/12/2014', '9195846'],
		['478', 'A', 'Initial Bet', '10/12/2014', '9196026'],
		['155', 'A', 'I love Username', '10/12/2014', '9196349'],
		['448', 'A', 'Rewards', '22/12/2014', '9220475'],
		['486', 'A', 'Calculation Functions', '24/12/2014', '9238226'],
		['474', 'A', 'Keyboard', '24/12/2014', '9239161'],
		['237', 'A', 'Free Cash', '24/12/2014', '9242643'],
		['443', 'A', 'Anton And Letters', '24/12/2014', '9242986'],
		['318', 'A', 'Even Odds', '24/12/2014', '9243289'],
		['427', 'A', 'Police Recruits', '25/12/2014', '9264793'],
		['469', 'A', 'I Wanna Be The Guy', '25/12/2014', '9265072'],
		['149', 'A', 'Business Trip', '25/12/2014', '9265220'],
		['405', 'A', 'Gravity Flip', '26/12/2014', '9273438'],
		['479', 'A', 'Expression', '26/12/2014', '9273560'],
	],
	
	'algorithm' :{
		'header' : ['Id', 'Name', 'Status', 'Difficulty', 'Category'],
		'data' : [ // Name, Learned or not, [basic, advanced, vateran, champion], [Graph, Tree, Mathamatics, Convex Hull, Mesh, DP, Greedy etc]
			['Quick Sort', 'Done', 'Basic', 'Sorting'],
			['Merge Sort', 'Not Done', 'Basic', 'Sorting'],
			['Pattern Matching', 'Not Done', 'Basic', 'String'],
			['Josephas Problem', 'Not Done', 'Basic', 'String'],
			['Buddy System', 'Not Done', 'Basic', 'String'],
			['Suffix Tree', 'Not Done', 'Advanced', 'String/Tree'],
			['Polish Notation', 'Not Done', 'Basic', 'Tree/Stack'],
			['Binary Tree', 'Not Done', 'Basic', 'Tree/Stack'],
			['Binary Search Tree', 'Not Done', 'Basic', 'Tree'],
			['Balanced Binary Tree', 'Not Done', 'Advanced', 'Tree'],
			['AVL Search Tree', 'Not Done', 'Advanced', 'Tree'],
			['mWay Search Tree', 'Not Done', 'Advanced', 'Tree'],
			['B-Tree', 'Not Done', 'Basic', 'Tree'],
			['B+-Tree', 'Not Done', 'Basic', 'Tree'],
			['Red-Black Tree', 'Not Done', 'Basic', 'Tree'],
			['Huffmans Algorithm', 'Not Done', 'Advanced', 'Tree'],
			['Heap Sort', 'Not Done', 'Basic', 'Tree/Sorting'],
			['Traversing Binary Tree', 'Not Done', 'Basic', 'Tree/Stack'],
			['Tower of Hanoi', 'Not Done', 'Basic', 'Recursion'],
		],
	}	
};

var start_date = new Date(2014, 11, 07);
var one_day = 24*60*60*1000;
var today = new Date();
var passed_days = Math.round( ( today.getTime() - start_date.getTime() ) / one_day );
var previously_solved = 21;

var lagged_behind = ( passed_days * 2 ) - Data.data.length + previously_solved;

var statistics = '';
if(lagged_behind > 0){
	statistics += "<p class='warning'>";
	statistics += "You are not up to the task!";
	statistics += " [ " + Math.round( ( lagged_behind / ( 50 - passed_days ) ) + 2 ) + "/day total "+lagged_behind+" ]";
} else{
	statistics += "<p class='ok'>";
	statistics += "Everything is going on well.";
}
statistics += '</p>';
document.getElementById('statistics').innerHTML = statistics;

var string = '';

string += "<table>";

string += "<tr>";
for(var data in Data['header']){
	string += "<th> "+ Data['header'][data] +" </th>"
}
string += "</tr>";

var problem = "http://codeforces.com/problemset/problem/";
var solution = "http://codeforces.com/contest/";

var i = Data.data.length;
Data.data.reverse();
for(var data in Data.data){
	string += "<tr>";
	string += "<td> "+ i +" </td>"
	string += "<td> "+ Data['data'][data][1] +" </td>"
	string += "<td> <a href='"+problem+Data['data'][data][0]+"/"+Data['data'][data][1]+"'>"+Data['data'][data][2]+"</a> </td>"
	string += "<td> "+ Data['data'][data][3] +" </td>"
	string += "<td> <a href='"+solution+Data.data[data][0]+"/submission/"+Data['data'][data][4]+"'>"+Data['data'][data][4]+"</a> </td>"
	string += "</tr>";
	i--;
}

string += "</table>";
document.getElementById('aihimel').innerHTML = string;

// Algorithm Section
var algo = Data.algorithm;

string = "";
string += "<table>";
string += "<tr>";
string += "<th>ID</th><th>Name</th><th>Status</th><th>Difficulty</th><th>Category</th>";
string += "</tr>";

i = 0;
//Calculating Done Algorithm.
for(var data in algo.data) if(algo.data[data][1] == 'Done') i++;

for(var data in algo.data){
	if(algo.data[data][1] == 'Done'){
		string += "<tr class='done'>";
		string += "<td>"+ i +"</td>";
		string += "<td>"+ algo.data[data][0] +"</td>";
		string += "<td>"+ algo.data[data][1] +"</td>";
		string += "<td>"+ algo.data[data][2] +"</td>";
		string += "<td>"+ algo.data[data][3] +"</td>";
		string += "</tr>";
		i--;
	}
}

i = 1
for(var data in algo.data){
	if(algo.data[data][1] != 'Done'){
		string += "<tr>";
		string += "<td>"+ i +"</td>";
		string += "<td>"+ algo.data[data][0] +"</td>";
		string += "<td>"+ algo.data[data][1] +"</td>";
		string += "<td>"+ algo.data[data][2] +"</td>";
		string += "<td>"+ algo.data[data][3] +"</td>";
		string += "</tr>";
		i++;
	}
}

string += "</table>";
document.getElementById('aihimel-algo').innerHTML = string;
