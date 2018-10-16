<?php

// define array of answers
$correct_answers = ["lisbon", "iphone", "macbook", "east", "a"];

// get questions in the form of an array
$questions = [$_POST["q1"],
              $_POST["q2"],
              $_POST["q3"],
              $_POST["q4"],
              $_POST["q5"]];

// get input in the form of an array
$input = [$_POST["check_q1"],
          $_POST["check_q2"],
          $_POST["check_q3"],
          $_POST["check_q4"],
          $_POST["check_q5"]];

// total number of questions
$total_questions = count($questions);
// total number of correct answers
$total_correct = 0;

// iterate through questions and answers
for ($i = 0; $i < $total_questions; $i++) {
  echo "Question " . ($i + 1) . ": " . $questions[$i] . "<br>";
  echo "You answered: " . $input[$i] . "<br>";
  echo "Correct answer: " . $correct_answers[$i] . "<br><br>";
  // increase correct answers if correct
  if ($input[$i] == $correct_answers[$i]) {
    $total_correct++;
  }
}

// present totals
echo "<strong>Total Correct: </strong>" . $total_correct . " out of " . $total_questions . "<br>";
echo "<strong>Grade: </strong>" . ($total_correct / $total_questions) * 100 . "%<br>";

?>
