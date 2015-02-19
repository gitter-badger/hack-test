<?hh

#phpinfo();
include('vendor/autoload.php');

use Mikoj\HackTest\Test;

$test = new Test();
echo $test->getTest();

