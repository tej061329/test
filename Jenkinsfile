pipeline {
agent any
stages {
stage ('BUILD') {
steps {
sh '''
cd /var/lib/jenkins/workspace/cprogram
make ABC.exe
'''
}
}
stage ('TEST') {
steps {
sh '''
sleep 5
echo "this is test stage"
'''
}
}
stage ('DEPLOY') {
steps {
sh '''
echo "this is deploy stage"
'''
}
}
stage ('4th') {
steps {
sh '''
pwd
'''
}
}
stage('5th') {
steps {
sh '''
echo "$$"
'''
}
}
}
}
